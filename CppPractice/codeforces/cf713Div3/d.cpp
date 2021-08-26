#include <bits/stdc++.h>
using namespace std;
#define dd double
#define ll long long int
#define light                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define mkp make_pair
#define pi pair<ll, ll>
#define pii pair<ll, pi>
#define fi first
#define sc second
ll INF = 1e9 + 5;
ll mod = 998244353;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    light;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n += 2;
        vector<ll> b(n);
        for (auto &x : b)
        {
            cin >> x;
        }
        sort(b.begin(), b.end());
        ll sum = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            sum += b[i];
        }
        if (sum == b[n - 2])
        {
            for (ll i = 0; i < n - 2; i++)
            {
                cout << b[i] << " ";
            }
            cout << "\n";
            continue;
        }
        ll index = -1;
        sum += b[n - 2];
        for (ll i = 0; i < n - 1; i++)
        {
            if (sum - b[i] == b[n - 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            cout << -1 << "\n";
            continue;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (i != index)
            {
                cout << b[i] << " ";
            }
        }
        cout << "\n";
    }
}