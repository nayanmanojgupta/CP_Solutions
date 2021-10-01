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

vector<int> v;

ll helper(int pos, ll curr, ll total, int n)
{
    if (pos == 0)
        return (ll)abs((total - curr) - curr);
    return min((ll)helper(pos - 1, curr + v[pos], total, n), (ll)helper(pos - 1, curr, total, n));
}

void solve()
{
    int n;
    cin >> n;
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
        total += temp;
    }
    cout << helper(n - 1, 0, total, n);
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