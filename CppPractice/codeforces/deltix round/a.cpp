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
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        bool flag = true;
        string t = s;
        while (flag && m)
        {
            flag = false;
            for (int i = 0; i < n; i++)
            {
                if(i==0)
                {
                    if (s[0] == '0' && s[1] == '1')
                    {
                        flag=true;
                        t[0] = '1';
                    }
                }
                else if(i==n-1)
                {
                    if (s[n - 1] == '0' && s[n - 2] == '1')
                    {
                        t[n - 1] = '1';
                        flag=true;
                    }
                }


                if ((s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '0') || (s[i] == '0' && s[i - 1] == '0' && s[i + 1] == '1'))
                {
                    t[i] = '1';
                    flag = true;
                }
            }
            s=t;
            m--;
        }
        cout << s << "\n";
    }

    return 0;
}
