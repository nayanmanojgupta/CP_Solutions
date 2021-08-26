#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
int main()
{
    boost;

    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> mp;
    bool visited[51];
    for (int i = 0; i < 51; i++)
        visited[i] = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[arr[i]])
        {
            mp[arr[i]] = i + 1;
            visited[arr[i]] = true;
        }
    }

    while (q--)
    {
        int x;
        cin >> x;
        cout << mp[x] << " ";

        for (auto y : mp)
        {
            if (y.second < mp[x])
            {
                mp[y.first]++;
            }
        }
        mp[x] = 1;
    }

    return 0;
}
