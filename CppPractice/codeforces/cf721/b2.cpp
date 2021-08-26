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
        string t = s;
        reverse(t.begin(), t.end());

        ll zeros = 0;
        for (auto x : s)
        {
            if (x == '0')
                zeros++;
        }
        if (s == t)
        {

            if (zeros == 1)
            {
                cout << "BOB\n";
            }
            else if (zeros % 2 == 0)
            {
                cout << "BOB\n";
            }
            else
            {
                cout << "ALICE\n";
            }
        }
        else
        {
            if (zeros == 2  && n % 2 != 0 && s[n / 2] == '0')
            {
                cout << "DRAW\n";
            }
            else
            {
                cout << "ALICE\n";
            }
        }
    }

    return 0;
}
