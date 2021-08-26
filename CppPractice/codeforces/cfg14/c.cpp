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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, int>> v;
        fi
        {
            int x;
            cin >> x;
            v.pb({x, i});
        }
        sort(v.begin(), v.end());
        int ans[n] = {0};
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            j = (j + 1) % m;
            if (j == 0)
                j = m;
            ans[v[i].second] = j;
            if (j == m)
                j = 0;
        }

        cout << "YES\n";
        for (auto x : ans)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
