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
ll mod = 998244353;

int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin >> n;
    ll dp[n + 1] = {0};

    // Observations
    // for 1 to any n-i , we have total no of divisors of n -1 solution
    // for 1 to n , solution donot exist
    // for 1 to n+i , solution is adding dp[i-1] for ewvery i

    // so first calulate  ans for 1 - n-i;
    // incrementing that dp value  which divide n
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 2 * i; j <= n; j += i)
        {
            (dp[j]++) % mod;
        }
    }

    dp[0] = 1;
    ll prefix = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = (dp[i] + prefix) % mod;
        prefix = (prefix + dp[i]) % mod;
    }
    
    cout << dp[n] << '\n';

    return 0;
}
