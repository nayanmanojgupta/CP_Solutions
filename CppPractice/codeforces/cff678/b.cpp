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
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        cout << "1 ";
                    else if (i + j + 1 == n)
                        cout << "1 ";
                    else
                        cout << "0 ";
                }
                cout << "\n";
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    // cout << i << " " << j << '\n';
                    int num = (n + 1) / 2;
                    if (i == j)
                        cout << "1 ";
                    else if (i + j - 1 == n)
                        cout << "1 ";
                    else if ((i == (n / 2) && j == (n + 1) / 2))
                        cout << "1 ";
                    else if (i == num && j == i + 1)
                        cout << "1 ";
                    else
                        cout << "0 ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
