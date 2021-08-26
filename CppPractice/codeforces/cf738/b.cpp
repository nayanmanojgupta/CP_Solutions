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
    cerr << "]\n";
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
        int INF = INT_MAX - 1;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        // 0 means 'B' and 1 means 'R'
        if (s[0] == 'B')
        {
            dp[0][0] = 0;
            dp[0][1] = INF;
        }
        else if (s[0] == 'R')
        {
            dp[0][0] = INF;
            dp[0][1] = 0;
        }
        else
        {
            dp[0][0] = 0;
            dp[0][1] = 0;
        }

        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'B')
            {
                dp[i][0] = min(dp[i - 1][0] + 1, dp[i - 1][1]);
                dp[i][1] = INF;
            }
            else if (s[i] == 'R')
            {
                dp[i][0] = INF;
                dp[i][1] = min(dp[i - 1][1] + 1, dp[i - 1][0]);
            }
            else
            {
                dp[i][0] = min(dp[i - 1][0] + 1, dp[i - 1][1]);
                dp[i][1] = min(dp[i - 1][1] + 1, dp[i - 1][0]);
            }
        }
        int ans = min(dp[n - 1][0], dp[n - 1][1]);
        // cout << ans << "\n";
        debug(dp);
        string temp = "";
        int y = 1;
        if (dp[n - 1][0] < dp[n - 1][1])
        {
            y = 0;
        }
        int i = n - 2;
        while (i >= 0)
        {
            if (y == 0)
            {
                temp += "B";
            }
            else
            {
                temp += "R";
            }

            if (dp[i][y ^ 1] < dp[i][y] + 1)
            {
                y = y ^ 1;
            }
            i--;
        }
        if (y == 0)
        {
            temp += "B";
        }
        else
        {
            temp += "R";
        }
        reverse(temp.begin(), temp.end());
        cout << temp << "\n";
    }

    return 0;
}
