#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k, count = 0;
        cin >> n;
        ll arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];

        if (n == 1)
        {
            cout << arr[0] << "\n";
        }
        else
        {
            count += arr[0];
            count += arr[n - 1];
            if (arr[0] > arr[1])
            {
                count -= (arr[0] - arr[1]);
                //arr[0] = arr[1];
            }
            
            for (i = 1; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
                {
                    count -= (arr[i] - max(arr[i + 1], arr[i - 1]));
                    //arr[i] = max(arr[i + 1], arr[i - 1]);
                    count += abs(arr[i] - arr[i - 1]);
                }
                else
                {
                    count += abs(arr[i - 1] - arr[i]);
                }
            }

            if (arr[n - 1] > arr[n - 2])
            {
                count -= (arr[n - 1] - arr[n - 2]);
                //arr[n - 1] = arr[n - 2];
            }
            else
            {
                count += abs(arr[n - 1] - arr[n - 2]);
            }

         

            cout << count << endl;
        }
    }
    return 0;
}