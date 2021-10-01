/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

const int MAX_SIZE = 1e6 + 5;
const int MOD = 1e9 + 7;
int dp[MAX_SIZE];

int helper(int target)
{
    if (target == 0)
        return 1;
    if (target < 0)
        return 0;
    if (dp[target] != -1)
        return dp[target];
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans = (ans + helper(target - i)) % MOD;
        dp[target] = ans;
    }
    return ans % MOD;
}

void solve()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << helper(n);
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