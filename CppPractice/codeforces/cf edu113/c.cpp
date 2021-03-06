#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // ordered_set pbds
#include <ext/pb_ds/tree_policy.hpp>     // ordered_set pbds
using namespace std;
using namespace __gnu_pbds;

#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define ull unsigned long long
#define dd double
#define lld long double
#define mkp make_pair
#define pi pair<ll, ll>
#define pii pair<ll, pi>
#define F first
#define S second
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define countsetbit __builtin_popcount
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << "\n";
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(dd t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.F);
    cerr << ",";
    _print(p.S);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
ll mod = 998244353;

ll fact(ll n)
{
    ll res = 1;

    for (ll i = 2; i <= n; i++)
    {
        res = (res * i) % mod;
    }
    return res % mod;
}

ll ncr(ll n, ll r)
{
    if (r > n - r)
        r = n - r;

    ll C[r + 1];
    memset(C, 0, sizeof(C));

    C[0] = 1;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = min(i, r); j > 0; j--)

            C[j] = (C[j] + C[j - 1]) % mod;
    }
    return C[r] % mod;
}

int main()
{
    //system("color C");
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll max1, max2;
        sort(v.begin(), v.end());
        max1 = v[n - 1];
        max2 = v[n - 2];

        // cout << max1 << " " << max2 << "\n";
        if (max1 - max2 > 1)
        {
            cout << "0\n";
            continue;
        }

        ///      ....... 5..... 5....
        // there are valid n! ways
        if (max1 == max2)
        {
            ll ans = fact(n) % mod;
            cout << ans << '\n';
            continue;
        }

        ll max2count = 0;
        for (auto x : v)
        {
            if (x == max2)
            {
                max2count++;
            }
        }

        // the invalid case is when max1 comes after max2
        // that is .......4.....5... , here this will be invalid
        // there will be , if there are k number of max2count , then block k+1 positions
        // so nck+1*(k!)*((n-(k+1)))!   invalid ways
        // so total valid = total ways - invalid ways

        ll k = max2count;
        ll total = fact(n) % mod;
        debug(total);
        ll invalid = (((ncr(n, k + 1) + mod) % mod) * ((fact(k) + mod) % mod) * ((fact(n - k - 1) + mod) % mod)) % mod;
        debug(invalid);
        ll ans = ((total - invalid) % mod + mod) % mod;
        cout << ans << '\n';
    }

    return 0;
}
