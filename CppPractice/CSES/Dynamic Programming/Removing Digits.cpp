/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

/**
 * Problem Link: https://cses.fi/problemset/task/1637
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
    vector<int> dp(n + 1, INT_MAX - 1);
    dp[0] = 0;
    for (int i = 0; i < n + 1; i++)
    {
        for (auto ch : to_string(i))
        {
            if (i - (ch - '0') >= 0)
                dp[i] = min(dp[i], dp[i - (ch - '0')] + 1);
        }
    }
    cout << dp[n] << endl;
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