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
        ll r, b, d;
        cin >> r >> b >> d;
        ll mine = min(r, b);
        ll maxe = max(r, b);
        ll temp = ceil(maxe * 1.0 / mine);
        // cout << temp << '\n';
        temp = temp - 1;
        // cout << temp << "\n";

        if (d < temp)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
