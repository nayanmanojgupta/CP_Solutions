// #include <bits/stdc++.h>
// #define boost                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0)
// #define ll long long
// #define fi for (ll i = 0; i < n; i++)
// #define pb push_back
// #define countsetbit __builtin_popcount

// using namespace std;
// vector<int> v1, v2;
// int dp[5001][5001];
// ll solve(int i, int j)
// {
//     if (i == v1.size())
//         return 0;
//     if (j == v2.size())
//         return INT_MAX;

//     if (dp[i][j] != -1)
//         return dp[i][j];

//     return dp[i][j] = min(solve(i + 1, j + 1) + abs(v1[i] - v2[j]), solve(i, j + 1));
// }
// int main()
// {
//     boost;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int num;
//         cin >> num;
//         if (num == 1)
//             v1.pb(i);
//         else
//             v2.pb(i);
//     }
//     memset(dp, -1, sizeof(dp));
//     cout << solve(0, 0) << '\n';

//     return 0;
// }

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
vector<int> v1, v2;
ll dp[5001][5001];
ll solve(int i, int j)
{
    if (i == v1.size())
        return 0;
    if (j == v2.size())
        return INT_MAX;

    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = min(solve(i + 1, j + 1) + abs(v1[i] - v2[j]), solve(i, j + 1));
}
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v1.pb(num);
    }
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        v2.pb(num);
    }

    memset(dp, -1, sizeof(dp));
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    cout << solve(0, 0) << '\n';

    return 0;
}
