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
        ll a, b;
        cin >> a >> b;
        ll x, y, z;
        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        if (b == 2)
            b = 4;
        x = a;
        y = (b - 1) * a;
        z = a * b;
        cout << x << " " << y << " " << z << "\n";
    }

    return 0;
}
