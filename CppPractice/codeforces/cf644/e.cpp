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
        // Time-Complexity O(n^n)
        int n;
        cin >> n;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char c; // because input given in continuous manner, no spaces
                cin >> c;
                arr[i][j] = c - '0';
            }
        }

        bool isPossible = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                // we will check for botton element and right element for every 1 , and if it is not 1 then we will return false.
                if (arr[i][j] && arr[i + 1][j] != 1 && arr[i][j + 1] != 1)
                {
                    isPossible = false;
                    break;
                }
            }
        }

        if (isPossible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}