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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    boost;
    ll tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        ll g;
        cin >> g;
        ll ans = 0;
        ll i = 0;
        while ((ll)((i + 1) * (i + 2)) <= (ll)2 * g)
            {
                ll num = 2 * g - i * i - i;
                ll deno = 2 * (i + 1);
                if (num < deno)
                {
                    break;
                }
                if (num % deno == 0)
                {
                    ans++;
                }
                i++;
            }

        cout << "Case #" << t << ": " << ans << "\n";
    }
    return 0;
}
