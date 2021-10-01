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
    string s;
    cin >> s;
    int n = s.length();
    int ans = INT_MIN;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            ans = max(ans, count);
        }
        else
            count = 1;
    }
    cout << max(ans, count);
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