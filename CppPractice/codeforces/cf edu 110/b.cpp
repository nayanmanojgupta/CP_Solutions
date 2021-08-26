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
        vector<ll> even, odd;
        for (int i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if (temp % 2 == 0)
                even.pb(temp);
            else
                odd.pb(temp);
        }
        ll ans = 0;
        for (int i = 0; i < even.size(); i++)
        {
            ans += (n - i - 1);
        }

        for (int i = 0; i < odd.size(); i++)
        {
            for (int j = i + 1; j < odd.size(); j++)
            {
                if (__gcd(odd[i], 2 * odd[j]) > 1)
                    ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
