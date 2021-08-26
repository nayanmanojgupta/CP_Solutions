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
        ll n, m;
        cin >> n >> m;
        // idea is do mutlisource bfs by considering all possible
        // subsets of possible zeros
        // # can be made zeros , who are already zero , we cannot do anything in them , have to include them in everyh subset
        // so subsets can be made from all # in grid
        // so if there are k # then we can have 2^k subsets of zeros from where we can do mutlisource bfs
        // 2^k include empty subset as well but empty subset not possible if grid donot contain 0 , because there should be atleast one zero for conditions to met

        // hence if zero exist in grid then ans 2^k else 2^k-1
        bool zero = false;
        ll ans = 1;
        ll mod = 1e9 + 7;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char ch;
                cin >> ch;
                if (ch == '0')
                    zero = true;
                else
                {
                    // it is #
                    ans = (ans * 2) % mod;
                }
            }
        }
        if (zero)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << ans - 1 << "\n";
        }
    }

    return 0;
}
