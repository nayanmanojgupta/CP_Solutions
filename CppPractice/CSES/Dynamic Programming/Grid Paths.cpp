/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

/**
 * Problem Link: https://cses.fi/problemset/task/1638
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

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    if (v[0][0] == '*')
        dp[0][0] = 0;
    else
        dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i][0] == '.')
            dp[i][0] = dp[i - 1][0];
    }
    for (int i = 1; i < n; i++)
    {
        if (v[0][i] == '.')
            dp[0][i] = dp[0][i - 1];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (v[i][j] == '.')
            {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[n - 1][n - 1] % MOD << endl;
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