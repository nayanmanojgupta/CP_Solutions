// giving runtime error in vs code , working fine on online ide
// got submitted as well...

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
    int arr[1000001] = {0};
    for (int i = 1; i <= 1000000; i++)
    {
        for (int j = i; j <= 1000000; j += i)
            arr[j]++;
    }
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }

    return 0;
}
