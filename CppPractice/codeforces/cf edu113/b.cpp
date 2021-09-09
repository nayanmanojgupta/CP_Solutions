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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<vector<char>> ans(n, vector<char>(n, 'X'));
        int one = 0, two = 0;
        for (auto x : s)
        {
            if (x == '1')
                one++;
            else
                two++;
        }

        if (two == 1 || two == 2)
        {
            cout << "NO\n";
            continue;
        }

        if (two == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                    {
                        ans[i][j] = 'X';
                    }
                    else
                    {
                        ans[i][j] = '=';
                    }
                }
            }

            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j];
                }
                cout << '\n';
            }

            continue;
        }

        if (one == 0)
        {
            vector<int> idx;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '2')
                    idx.push_back(i);
            }
            for (int i = 0; i < idx.size(); i++)
            {
                for (int j = i + 1; j < idx.size(); j++)
                {
                    if (j == i + 1)
                    {
                        ans[idx[i]][idx[j]] = '+';
                        ans[idx[j]][idx[i]] = '-';
                    }
                    else
                    {
                        ans[idx[i]][idx[j]] = '-';
                        ans[idx[j]][idx[i]] = '+';
                    }
                }
            }

            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << ans[i][j];
                }
                cout << '\n';
            }

            continue;
        }

        vector<int> oneidx, twoidx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
                twoidx.push_back(i);
            if (s[i] == '1')
                oneidx.push_back(i);
        }

        for (int i = 0; i < twoidx.size(); i++)
        {
            for (int j = i + 1; j < twoidx.size(); j++)
            {
                if (j == i + 1)
                {
                    ans[twoidx[i]][twoidx[j]] = '+';
                    ans[twoidx[j]][twoidx[i]] = '-';
                }
                else
                {
                    ans[twoidx[i]][twoidx[j]] = '-';
                    ans[twoidx[j]][twoidx[i]] = '+';
                }
            }
        }

        for (int i = 0; i < oneidx.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (oneidx[i] != j)
                {
                    ans[oneidx[i]][j] = '=';
                    ans[j][oneidx[i]] = '=';
                }
            }
        }

        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j];
            }
            cout << '\n';
        }

        continue;
    }

    return 0;
}
