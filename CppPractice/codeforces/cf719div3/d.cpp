
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
        int arr[n + 1];
        ll count = 0;
        map<ll, ll> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arr[i] -= i;
            mp[arr[i]]++;
        }
        ll ans = 0;

        for (auto x : mp)
        {
            if (x.second)
            {
                ll y = x.second;
                ans += y * (y - 1) / 2;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
