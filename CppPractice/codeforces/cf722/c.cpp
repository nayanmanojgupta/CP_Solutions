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

vector<ll> gp[100001];
ll dp[100001][2];
// vector<bool> visited;
vector<pair<ll, ll>> v;
void dfs(ll x, ll p)
{
    //    visited[x] = true;
    for (auto u : gp[x])
    {
        if (u != p)
        {
            dfs(u, x);
            dp[x][0] += max(abs(v[x - 1].first - v[u - 1].first) + dp[u][0], abs(v[x - 1].first - v[u - 1].second) + dp[u][1]);
            dp[x][1] += max(abs(v[x - 1].second - v[u - 1].first) + dp[u][0], abs(v[x - 1].second - v[u - 1].second) + dp[u][1]);
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
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        v.clear();
        for (ll i = 1; i <= n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.pb({a, b});
        }
        for (ll i = 1; i <= n; i++)
        {
            gp[i].clear();
            dp[i][0] = dp[i][1] = 0;
        }
        //        visited.resize(n + 1);

        for (ll i = 1; i <= n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            gp[a].push_back(b);
            gp[b].push_back(a);
        }

        dfs(1, -1);
        ll ans = max(dp[1][0], dp[1][1]);
        cout << ans << "\n";
    }

    return 0;
}
