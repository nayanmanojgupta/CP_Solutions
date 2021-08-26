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
        ll n;
        cin >> n;
        vector<ll> a(n, 0), b(n, 0);
        unordered_map<ll, ll> mp;

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            mp[b[i]] = i;
        }

        vector<ll> ans;
        int i = 0;
        while (i < n)
        {
            bool check1 = false;
            bool check2 = false;
            int idx1, idx2;
            if (mp.find(n + i - a[0]) != mp.end())
            {
                idx1 = mp[n + i - a[0]];
                check1 = true;
            }
            if (mp.find(i - a[0]) != mp.end())
            {
                idx2 = mp[i - a[0]];
                check2 = true;
            }
            if (mp.find(2 * n + i - a[0]) != mp.end())
            {
                idx2 = mp[2 * n + i - a[0]];
                check2 = true;
            }

            if (check1 && check2)
            {
                // cout << "yes\n";
                int bar1, bar2;
                int idxts1 = idx1, idxts2 = idx2;

                idx1 = (idx1 + 1) % n;
                idx2 = (idx2 + 1) % n;

                bar1 = (a[1] % n + b[idx1] % n) % n;
                bar2 = (a[1] % n + b[idx2] % n) % n;
                // cout << bar1 << " " << bar2 << "\n";
                int s = 1;
                while (bar1 == bar2 && s < n)
                {
                    s++;
                    idx1 = (idx1 + 1) % n;
                    idx2 = (idx2 + 1) % n;

                    bar1 = (a[s] % n + b[idx1] % n) % n;
                    bar2 = (a[s] % n + b[idx2] % n) % n;
                }
                if (bar1 > bar2)
                {
                    check1 = false;
                    idx1 = idxts1;
                    idx2 = idxts2;
                }
                else if (bar2 > bar1)
                {
                    idx2 = idxts2;
                    idx1 = idxts1;
                    check2 = false;
                }
                else
                {
                    idx1 = idxts1;
                    idx2 = idxts2;
                    check2 = false;
                }
            }

            if (check1)
            {
                int k = 0;
                int c = 0;
                for (int q = idx1; k < n, c < n; k++)
                {
                    ll val = (b[q] + a[k]) % n;
                    c++;
                    q = (q + 1) % n;
                    ans.pb(val);
                }
                //cout << c << "\n";

                break;
            }
            if (check2)
            {
                int k = 0;
                int c = 0;
                for (int q = idx2; k < n, c < n; k++)
                {
                    ll val = (b[q] + a[k]) % n;
                    c++;
                    q = (q + 1) % n;
                    ans.pb(val);
                }
                //cout << c << "\n";
                break;
            }

            i++;
        }

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
