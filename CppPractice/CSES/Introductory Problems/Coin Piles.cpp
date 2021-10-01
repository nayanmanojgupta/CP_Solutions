#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

void solve()
{
    int a, b;
    cin >> a >> b;
    int l = 2 * a - b;
    int r = 2 * b - a;
    if (l >= 0 and r >= 0 and l % 3 == 0 and r % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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
    int t;
    cin >> t;
    while (t--)
        solve();
    // Code end here //
    return 0;
}