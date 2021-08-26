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
pair<int, int> subarray(vector<int> arr, int n)
{
    int a = -10000, b = -10000;
    pair<int, int> p;
    unordered_map<int, int> mp;
    vector<int> prefix = arr;
    // debug(prefix);
    prefix[0] = arr[0];
    if (arr[0] == 0)
    {
        a = 0;
        b = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (prefix[i] == 0)
        {
            if ((b - a + 1) < 0)
            {
                a = i;
                b = i;
            }
        }
        prefix[i] += prefix[i - 1];
        if (prefix[i] == 0)
        {
            if ((b - a + 1) < i+1)
            {
                a = 0;
                b = i;
            }
        }
        if (mp.count(prefix[i]) )
        {
            int c = mp[prefix[i]] + 1;
            int d = i;
            if((d-c+1)>(b-a+1))
            {
                a=c;
                b=d;

            }
            
        }
        if (!mp.count(prefix[i]))
            mp[prefix[i]] = i;
    }
  //  debug(prefix);
    p.first = a;
    p.second = b;
    return p;
}
vector<int> solve(int **mat, int r, int col)
{
    int a = 0, b = 0, c = 0, d = 0;
    int ans = 0;
    int i, j, k;
    vector<int> v;
    for (i = 0; i < r; i++)
    {
        vector<int> temp(col, 0);
        for (j = i; j < r; j++)
        {
            for (k = 0; k < col; k++)
            {
                temp[k] += mat[j][k];
            }
            debug(temp);
            pair<int, int> p = subarray(temp, col);
            debug(p);
            if (((j + k - 1) * (p.first + p.second - 1)) > ans)
            {
                ans = ((j + k - 1) * (p.first + p.second - 1));
                a = j;
                b = k;
                c = p.first;
                d = p.second;
            }
        }
    }
    v = {a, b, c, d};
    return v;
}
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    int r, c;
    cin >> r >> c;
    int **mat = new int *[r];
    for (int i = 0; i < r; i++)
        mat[i] = new int[c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    vector<int> v = solve(mat, r, c);
    for (auto x : v)
        cout << x << " ";
    cout << "\n";

    return 0;
}