#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int n = s.length();
        bool is = false;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == '1')
            {
                if (b < 2)
                {
                    is = true;
                    break;
                }
                else if (s[n - i - 1] == '0')
                {
                    is = true;
                    break;
                }
                else
                {
                    s[i] = s[n - i - 1] = '1';
                    b -= 2;
                }
            }
            else if (s[i] == '0')
            {
                if (a < 2)
                {
                    is = true;
                    break;
                }
                else if (s[n - i - 1] == '1')
                {
                    is = true;
                    break;
                }
                else
                {
                    s[i] = s[n - i - 1] = '0';
                    a -= 2;
                }
            }
            else
            {
                if (s[n - i - 1] == '1')
                {
                    if (b < 2)
                    {
                        is = true;
                        break;
                    }
                    else
                    {
                        s[i] = '1';
                        b -= 2;
                    }
                }
                else if (s[n - i - 1] == '0')
                {
                    if (a < 2)
                    {
                        is = true;
                        break;
                    }
                    else
                    {
                        s[i] = '0';
                        a -= 2;
                    }
                }
            }
        }
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == '?')
            {
                if (a > 1)
                {
                    s[i] = s[n - i - 1] = '0';
                    a -= 2;
                }
                else if (b > 1)
                {
                    s[i] = s[n - i - 1] = '1';
                    b -= 2;
                }
                else
                {

                    is = true;
                    break;
                }
            }
        }

        if (n % 2 != 0)
        {
            if (s[n / 2] == '1')
            {
                if (b < 1)
                {
                    is = true;
                }
                else
                {
                    b--;
                }
            }
            else if (s[n / 2] == '0')
            {
                if (a < 1)
                {
                    is = true;
                }
                else
                {
                    a--;
                }
            }
            else
            {
                if (a)
                {
                    s[n / 2] = '0';
                    a--;
                }
                else if (b)
                {
                    s[n / 2] = '1';
                    b--;
                }
                else
                {
                    is = true;
                }
            }
        }

        if (!is)
            cout << s << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}