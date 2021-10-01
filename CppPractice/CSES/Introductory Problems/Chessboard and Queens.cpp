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

char chess[8][8];
int ans = 0;
bool ld[15], rd[15], row[8];

void countWays(int j)
{
    if (j == 8)
    {
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        if (chess[i][j] == '.' && ld[i - j + 7] == 0 && rd[i + j] == 0 && row[i] == 0)
        {
            ld[i - j + 7] = 1, rd[i + j] = 1, row[i] = 1;
            countWays(j + 1);
            ld[i - j + 7] = 0, rd[i + j] = 0, row[i] = 0;
        }
    }
}

void solve()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> chess[i][j];
        }
    }
    countWays(0);
    cout<<ans;
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