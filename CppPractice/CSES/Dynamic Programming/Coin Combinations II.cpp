/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

/**
 * Problem Link: https://cses.fi/problemset/task/1636
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
#define F first
#define S Second
#define VI vector<int>
#define VLL vector<long long>
#define PII pair<int, int>
#define MII map<int, int>
#define pb push_back()
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

const int MOD = 1e9 + 7;

inline ll mod(ll x, ll m)
{
    return (x % m + m) % m;
}

int helper(VI x, int target)
{
    int n = x.size();
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if (j - x[i - 1] >= 0)
                dp[i][j] = (dp[i - 1][j] + dp[i][j - x[i - 1]]) % MOD;
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][target] % MOD;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    VI coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << helper(coins, x) << endl;
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    //Code starts from here //
    // int testCases;
    // cin >> testCases;
    // while (testCases--)
    solve();
    // Code end here //
    return 0;
}

// #TESTCASES:-
// #INPUT:

// #OUTPUT: