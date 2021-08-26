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
ll solve()
{
    string s;
    bool flag = 0;
    ll n, k;
    cin >> n >> k;
    cin >> s;
    ll mid, j;
    mid = (n % 2 == 0) ? ((n / 2) - 1) : n / 2;
    ll ans = 0, temp = 1;
    while (mid >= 0)
    {
        ans = (ans + (s[mid] - 'a') * temp) % mod;
        temp = (temp * k) % mod;
        mid--;
    }
    mid = (n / 2)-1;
   
   j=n%2==1?((n/2)+1):n/2;

    while (mid >= 0 && j < n)
    {

        if (s[j] < s[mid])
        {
            break;
        }
        if (s[j] > s[mid])
        {
            flag = 1;
            break;
        }
        else
        {
            mid--;
            j++;
        }
    }
    if (flag)
    {
        ans += 1;
    }

    ans = ans % mod;

    return ans;
}
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
        ll ans = solve();
        cout << "Case #" << t << ": " << ans << "\n";
    }
}