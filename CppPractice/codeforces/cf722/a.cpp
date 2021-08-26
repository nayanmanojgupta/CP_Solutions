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
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, ll> mp;
        ll temp = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            temp = min(temp, arr[i]);
        }
        ll ans = n - mp[temp];
        cout << ans << "\n";
    }

    return 0;
}
