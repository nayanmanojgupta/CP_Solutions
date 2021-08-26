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
ll countDigits(ll n)
{
    ll count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int dig[] = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll digits = countDigits(n);
        ll temp = 9 * (digits - 1);
        int temp2 = dig[digits];
        int sh = n / temp2;
        // cout << sh << " " << temp << "\n";
        ll ans = sh + temp;
        cout << ans << "\n";
    }

    return 0;
}
