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
        int n, k;
        cin >> n >> k;
        int arr[n];
        fi
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (k)
            {
                int temp = min(k, arr[i]);
                arr[i] -= temp;
                arr[n - 1] += temp;
                k -= temp;
                if (!k)
                {
                    break;
                }
            }
        }
        fi
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
