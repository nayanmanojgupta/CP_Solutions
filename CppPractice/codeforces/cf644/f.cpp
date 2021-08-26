#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back

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
        vector<vector<char>> mat(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        }

        ll ans = 0;
        string s = "";
        for (int j = 0; j < m; j++)
        {
            map<char, int> mp;
            for (int i = 0; i < n; i++)
            {
                mp[mat[i][j]]++;
            }
            ll temp = 0;
            char theChar;
            for (auto x : mp)
            {
                if (x.second > temp)
                {
                    temp = x.second;
                    theChar = x.first;
                }
            }
            if (temp == 1)
            {
                s += '@';
            }
            else
                s += theChar;

            ans += temp;
        }

        if (ans < (n * m) - n)
        {
            cout << "-1\n";
        }
        else
        {
            if (m==2 && n==2) 
            {
                s="";
                s+=mat[0][0];
                s+=mat[1][1];

            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    int count = 0;
                    for (int j = 0; j < m; j++)
                    {
                        if (mat[i][j] != s[j])
                            count++;
                    }
                    for (int j = 0; j < m; j++)
                    {

                        if (mat[i][j] != s[j] && (count == 2 || m == 2 || m == 1) && s[j] == '@')
                        {
                            s[j] = mat[i][j];
                        }
                    }
                }
            }

            cout << s << "\n";
        }
    }

    return 0;
}
