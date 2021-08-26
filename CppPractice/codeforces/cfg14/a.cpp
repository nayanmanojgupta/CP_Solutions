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
        ll n, x;
        cin >> n >> x;
        int arr[n];
        ll sum = 0;
        fi
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == x)
        {
            cout << "NO\n";
            continue;
        }
        sort(arr, arr + n);
        ll prefix = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (prefix == x && i == 1)
            {

                swap(arr[0], arr[1]);
                break;
            }
            prefix += arr[i];
            if (prefix == x)
            {
                swap(arr[i], arr[i + 1]);
                break;
            }
        }

        cout << "YES\n";
        for (auto x : arr)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
