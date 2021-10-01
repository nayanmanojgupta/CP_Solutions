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
    string ans;
    ans.resize(s.length());
    map<char, int> m;
    for (char ch : s)
        m[ch]++;
    int cntOdd = 0;
    for (auto x : m)
        if (x.second % 2 == 1)
        {
            ans[s.length()/2] = x.first;
            cntOdd++;
        }
    if (cntOdd > 1)
        cout << "NO SOLUTION\n";
    else
    {
        int i = 0;
        for (auto x : m)
        {
            for (int j = 0; j < x.second / 2; j++)
            {
                ans[i] = x.first;
                ans[s.length()-i-1] = x.first;
                i++;
            }
        }
        cout<<ans;
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
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    // Code end here //
    return 0;
}