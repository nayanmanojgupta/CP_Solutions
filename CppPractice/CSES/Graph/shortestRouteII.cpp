#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount
#define INF 1e15
using namespace std;
ll n, m, q;
vector<vector<ll>> adj, ans;
void solve()
{
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (i == j)
                ans[i][j] = 0;
            else if (adj[i][j])
                ans[i][j] = adj[i][j];
            else
            {
                ans[i][j] = LONG_MAX;
            }
        }
    }

    for (ll node = 1; node <= n; node++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                ans[i][j] = min(ans[i][j], ans[i][node] + ans[node][j]);
            }
        }
    }
}
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m >> q;
    adj.resize(n + 1);
    for (ll i = 1; i <= n; i++)
        adj[i].resize(n + 1);
    ans.resize(n + 1);
    for (ll i = 1; i <= n; i++)
        ans[i].resize(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            adj[i][j] = adj[j][i] = INF;
        }
    }
    for (ll i = 1; i <= m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(c, adj[a][b]);
        adj[b][a] = min(c, adj[b][a]);
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << setw(10) << adj[i][j] << " ";
    //     cout << "\n";
    // }
    solve();
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        if (ans[a][b] == INF)
            ans[a][b] = -1;

        cout << ans[a][b] << "\n";
    }

    return 0;
}
