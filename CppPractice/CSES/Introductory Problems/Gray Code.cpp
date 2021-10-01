#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

vector<string> fun(int n)
{
    if (n <= 0)
        return {"0"};
    if (n == 1)
        return {"0", "1"};
    vector<string> p = fun(n - 1);
    vector<string> q = p;
    reverse(q.begin(), q.end());
    for (int i = 0; i < p.size(); i++)
    {
        p[i] = "0" + p[i];
        q[i] = "1" + q[i];
    }
    p.insert(p.end(), q.begin(), q.end());
    return p;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> ans = fun(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    //Code starts from here //
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    // Code end here //
    return 0;
}