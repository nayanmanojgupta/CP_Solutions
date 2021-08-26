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
    ll tc = 1;
    //cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll arr[n], sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            pq.push(arr[i]);
            sum += arr[i];
            count++;
            if (sum < 0)
            {
                sum -= pq.top();
                pq.pop();
                count--;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
