#include <bits/stdc++.h>
using namespace std;

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
#define countsetbit __builtin_popcount

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
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v.pb(val);
        }
        sort(v.begin(), v.end());
        bool flag = false;
        ll maxe = INT_MIN;
        for (auto x : v)
        {

            maxe = max(maxe, x);
            if (x < 0)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "NO\n";
            continue;
        }
        flag = false;

        //checking that whether it is already nice array
        ll temp = v[1] - v[0];
        if (temp == v[0] || temp == v[1])
        {
            for (int i = 2; i < n; i++)
            {
                if ((v[i] - v[i - 1]) != temp)
                {
                    flag = true;
                }
            }
            if (!flag)
            {
                cout << "YES\n";
                cout << n << "\n";
                for (auto x : v)
                    cout << x << " ";
                cout << "\n";
                continue;
            }
        }

        cout << "YES\n";
        cout << maxe + 1 << "\n";
        for (int i = 0; i <= maxe; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
