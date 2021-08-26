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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }
        if (n == 2)
        {
            cout << "-1\n";
            continue;
        }

        // if (n == 3)
        // {
        //     int arr[3][3] = {{2, 9, 7}, {4, 6, 3}, {1, 8, 5}};
        //     for (int i = 0; i < n; i++)
        //     {
        //         for (int j = 0; j < n; j++)
        //             cout << arr[i][j] << " ";
        //         cout << "\n";
        //     }
        //     continue;
        // }
        ll lastodd, lasteven;
        if (n % 2 == 0)
        {
            lastodd = (n * n - 1);
            lasteven = n * n;
        }
        else
        {
            lasteven = (n * n - 1);
            lastodd = n * n;
        }
        ll num = 1;
        ll temp = 2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (num > lastodd)
                {
                    cout << temp << ' ';
                    temp += 2;
                }
                else
                {
                    cout << num << " ";
                    num += 2;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
