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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[27] = {0};
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 65]++;
            if (i != 0 && s[i] != s[i - 1])
            {
                if (freq[s[i] - 65] > 1)
                {
                    cout << "NO\n";
                    flag = true;
                    break;
                }
            }
        }

        if (!flag)
            cout << "YES\n";
    }

    return 0;
}
