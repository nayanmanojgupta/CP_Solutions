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
        int arr[4];
        priority_queue<int> pq;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            pq.push(arr[i]);
        }
        int ele1 = max(arr[0], arr[1]);
        int ele2 = max(arr[2], arr[3]);
        set<int> s;
        s.insert(ele1);
        s.insert(ele2);
        ele1 = pq.top();
        pq.pop();
        s.insert(ele1);
        ele2 = pq.top();
        pq.pop();
        s.insert(ele2);
        if (s.size() == 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
