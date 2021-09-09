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

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(a % b, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}
ll MMI(int a)
{
    ll x, y;
    ll g = gcdExtended(a,mod, &x, &y);

    if (g != 1)
    {
        return -1;
    }

    ll res = (x % mod + mod) % mod;
    return res;
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
        ll n, i, j, k;
        cin >> n;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
            cin >> v[i];
        ll maxV = INT_MIN, max2 = INT_MIN, max2Count = 0;
        for (i = 0; i < n; i++)
        {
            if (v[i] > maxV)
            {
                max2 = maxV;
                maxV = v[i];
            }
            else if (v[i] == maxV)
                max2 = maxV;
            else if (v[i] > max2)
                max2 = v[i];
        }

        //if diff is 0
        if (maxV == max2)
        {
            cout << (n !) % mod << endl;
            continue;
        }

        // count of last second max value
        for (i = 0; i < n; i++)
        {
            if (v[i] == max2)
                max2Count++;
        }

        ll maxPermu = 0;
        for (i = 1; i <= max2Count; i++)
        {
            maxPermu += permute(max2Count, i) * permute(max2Count, max2Count - i);
        }

        cout << (maxPermu * (n !) / (max2Count + 1)) % mod << endl;
    }

    return 0;
}
