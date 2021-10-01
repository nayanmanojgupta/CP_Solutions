/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

/**
 * Problem Link: https://cses.fi/problemset/task/1634
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

int helper(vector<int> &v, int target)
{
    int n = v.size();
    int dp[n + 1][target + 1];
    for (int i = 0; i < target + 1; i++)
        dp[0][i] = INT_MAX - 1;
    for (int i = 1; i < n + 1; i++)
        dp[i][0] = 0;
    for (int i = 1; i < target + 1; i++)
    {
        if (i % v[0] == 0)
            dp[1][i] = i / v[0];
        else
            dp[1][i] = INT_MAX - 1;
    }
    for (int i = 2; i < n + 1; i++)
    {
        for (int j = 1; j < target + 1; j++)
        {
            if (v[i - 1] <= j)
                dp[i][j] = min(dp[i - 1][j], dp[i][j - v[i - 1]] + 1);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    if (dp[n][target] == INT_MAX - 1)
        return -1;
    return dp[n][target];
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
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