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
        int t = 0, m = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                t++;
            else
                m++;
        }
        if (t != 2 * m)
        {
            cout << "NO\n";
            continue;
        }

        bool check = false;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                c++;
            else
                c--;
            if (c < 0)
            {
                cout << "NO\n";
                check = true;
                break;
            }
        }

        if (check)
        {
            continue;
        }

        c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'T')
                c++;
            else
                c--;
            if (c < 0)
            {
                cout << "NO\n";
                check = true;
                break;
            }
        }

        if (check)
        {
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}
