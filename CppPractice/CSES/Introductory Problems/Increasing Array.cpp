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
    int n;
    cin >> n;
    int p, temp;
    cin >> p;
    temp = p;
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> p;
        if (temp > p)
            ans += (temp - p);
        else
            temp = p;
    }
    cout << ans;
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
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    // Code end here //
    return 0;
}