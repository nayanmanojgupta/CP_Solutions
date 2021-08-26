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
        // to unset the most sign bit , we have to do and with a number
        // which has that bit unset
        int n;
        cin >> n;
        int temp = log2(n);
        int ans = pow(2, temp) - 1;
        cout << ans << "\n";
    }

    return 0;
}
