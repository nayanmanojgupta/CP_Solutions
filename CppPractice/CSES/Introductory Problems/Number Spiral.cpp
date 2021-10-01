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
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
        if (x % 2 == 0)
        {
            cout << (x * x) - y + 1 << endl;
        }
        else
        {
            cout << (x - 1) * (x - 1) + y << endl;
        }
    }
    else
    {
        if (y % 2 == 0)
        {
            cout << (y - 1) * (y - 1) + x << endl;
        }
        else
        {
            cout << (y * y) - x + 1 << endl;
        }
    }
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