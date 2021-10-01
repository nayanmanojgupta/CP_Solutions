#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

set<string> ans;
string s;

void permute(int l, int r)
{
    if (l == r)
    {
        ans.insert(s);
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permute(l + 1, r);
        swap(s[l], s[i]);
    }
    return;
}

void solve()
{
    cin >> s;
    permute(0, (int)s.size() - 1);
    cout << (int)ans.size() << "\n";
    for (string x : ans)
        cout << x << "\n";
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    solve();

    return 0;
}