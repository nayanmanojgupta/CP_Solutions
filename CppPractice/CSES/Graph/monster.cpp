// This question is multi-source bfs
#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
int n, m;
vector<vector<int>> arr;
vector<pair<int, int>> monster;
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
pair<int, int> si;
pair<int, int> ei;
map<pair<int, int>, pair<int, int>> parent;



bool isValid(int x, int y, int timer)
{
    if (x < 0 || y < 0 || x >= n || y >= m)
        return false;
    if (arr[x][y] <= timer)
        return false;

    return true;
}

bool isEscape(int x, int y, int timer)
{
    if (!isValid(x, y, timer))
        return false;
    if (x == 0 || y == 0 || x == n - 1 || y == m - 1)
        return true;
    return false;
}


void preprocess_lava()
{
    queue<pair<pair<int, int>, int>> q;
    for (auto m : monster)
    {
        q.push({m, 0});
    }
    while (!q.empty())
    {
        int tx = q.front().first.first;
        int ty = q.front().first.second;
        int timer = q.front().second;
        timer++;
        q.pop();

        for (auto mi : moves)
        {
            if (isValid(tx + mi.first, ty + mi.second, timer))
            {
                arr[tx + mi.first][ty + mi.second] = timer;
                q.push({{tx + mi.first, ty + mi.second}, timer});
            }
        }
    }
}

bool bhaggo()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({si, 0});
    parent[si] = {-1, -1};
    while (!q.empty())
    {
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int timer = q.front().second;
        timer++;
        q.pop();

        for (auto m : moves)
        {
            int tx = cx + m.first;
            int ty = cy + m.second;

            if (isEscape(tx, ty, timer))
            {
                ei = {tx, ty};
                parent[{tx, ty}] = {cx, cy};
                return true;
            }

            if (isValid(tx, ty, timer))
            {
                parent[{tx, ty}] = {cx, cy};
                arr[tx][ty] = timer;
                q.push({{tx, ty}, timer});
            }
        }
    }

    return false;
}

int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m;
    arr.resize(n);
    for (int i = 0; i < n; i++)
        arr[i].resize(m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = INT_MAX;
            char x;
            cin >> x;
            if (x == '#')
                arr[i][j] = 0;

            if (x == 'A')
            {
                si = {i, j};
                arr[i][j] = 0;
            }
            if (x == 'M')
            {
                monster.push_back({i, j});
                arr[i][j] = 0;
            }
        }
    }

   
   
    if (si.first == 0 or si.second == 0 or si.first == n - 1 or si.second == m - 1)
    {
        cout << "YES" << endl;
        cout << 0;
        return 0;
    }
    preprocess_lava();

    if (!bhaggo())
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    pair<int, int> tmp = ei;
    pair<int, int> tmp1 = parent[ei];
    pair<int, int> ed = {-1, -1};
    vector<char> ans;
    while (tmp1 != ed)
    {

        if ((tmp.second - tmp1.second) == 1 and (tmp.first - tmp1.first) == 0)
        {
            ans.push_back('R');
        }
        if ((tmp.second - tmp1.second) == -1 and (tmp.first - tmp1.first) == 0)
        {
            ans.push_back('L');
        }
        if ((tmp.second - tmp1.second) == 0 and (tmp.first - tmp1.first) == 1)
        {
            ans.push_back('D');
        }
        if ((tmp.second - tmp1.second) == 0 and (tmp.first - tmp1.first) == -1)
        {
            ans.push_back('U');
        }
        tmp = parent[tmp];
        tmp1 = parent[tmp];
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto c : ans)
    {
        cout << c;
    }


return 0;
}

