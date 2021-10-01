/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

/**
 * Problem Link: https://cses.fi/problemset/task/1746
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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int dp[n][x + 1];
    memset(dp, 0, sizeof(dp));
    if (arr[0] == 0)
    {
        for (int i = 0; i < x + 1; i++)
            dp[0][i] = 1;
    }
    else
        dp[0][arr[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 1; j < x + 1; j++)
            {
                for (int k : {j - 1, j, j + 1})
                {
                    if (k >= 1 and k <= x)
                        dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
            }
        }
        else
        {
            for (auto k : {arr[i] - 1, arr[i], arr[i] + 1})
            {
                if (k >= 1 and k <= x)
                    dp[i][arr[i]] = (dp[i][arr[i]] + dp[i - 1][k]) % MOD;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i < x + 1; i++)
    {
        ans = (ans + dp[n - 1][i]) % MOD;
    }
    cout << ans << endl;
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