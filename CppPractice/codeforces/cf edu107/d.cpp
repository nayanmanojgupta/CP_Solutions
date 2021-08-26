// NOT AC
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

int main()
{
    boost;
    int n, k;
    cin >> n >> k;
    string temp, ans;
    for (int i = 0; i < k; i++)
    {
        char x = 'a' + i;
        temp.push_back(x);
    }

    for (int i = 0; i < k; i++)
    {
        int j = 2;
        while (j--)
        {
            ans.push_back('a' + i);
        }
    }
    int len = 2 * k;
    while (len < n)
    {
        ans += ans;
        len += len;
    }
    if (len > n)
    {
        cout << ans.substr(0, n) << '\n';
    }
    else
    {
        cout << ans << "\n";
    }

    return 0;
}
