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
        int arr[n + 1];
        ll count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> ans;
        ll prime=1e9+7;
        for(int i=2;i<=n;i+=2)
        {
            int temp=min(arr[i],arr[i-1]);
            arr[i-1]=temp;
            arr[i]=prime;
            ans.pb(i - 1);
            ans.pb(i);
            ans.pb(temp);
            ans.pb(prime);
        }



        count = ans.size() / 4;
        cout << count << "\n";
        ll temp = 0;
        if (count != 0)
        {
            for (auto x : ans)
            {
                if (temp == 4)
                {
                    temp = 0;
                    cout << "\n";
                }
                cout << x << " ";

                temp++;
            }
            cout << "\n";
        }

        // for (int i = 1; i <= n; i++)
        //     cout << arr[i] << " ";
        // cout << "\n";
    }

    return 0;
}