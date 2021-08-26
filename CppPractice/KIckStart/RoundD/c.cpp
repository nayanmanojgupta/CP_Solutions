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
ll mod = 1e9 + 7;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {

        ll n, m;
        cin >> n >> m;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll l, r;
            cin >> l >> r;
            for (ll j = l; j <= r; j++)
                v.pb(j);
        }
        // for (int i = 0; i < 50; i++)
        //     cout << v[i] << " ";
        cout << "\n";
        vector<ll> ans;
        for (ll i = 0; i < m; i++)
        {
            ll temp;
            cin >> temp;
            if (v[lower_bound(v.begin(), v.end(), temp) - v.begin()] == temp)
            {
                ans.pb(temp);
                v.erase(lower_bound(v.begin(), v.end(), temp));
            }
                }
        cout << "\n";
        // cout << "Case #" << t << "\n";
    }
}