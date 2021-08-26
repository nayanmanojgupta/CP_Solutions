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
        string s;
        cin >> s;
        int count[26] = {0};
        for (int i = 0; i < n; i++)
        {
            count[s[i] - 'a'] = 1;
        }
        bool flag1 = false;
        for (int i = 0; i < 26; i++)
        {
            if (count[i] == 0)
            {
                char ch = i + 97;
                cout << ch << "\n";
                flag1 = true;
                break;
            }
        }
        if (flag1)
        {
            continue;
        }
        set<string> st;
        for (int i = 1; i < n; i++)
        {
            string temp = "";
            temp += s[i - 1];
            temp += s[i];
            st.insert(temp);
        }
        bool flag = false;
        for (int i = 0; i < 26; i++)
        {
            string temp2 = "";
            char ch = i + 97;
            temp2 += ch;

            for (int j = 0; j < 26; j++)
            {
                char ch = j + 97;
                temp2.pb(ch);
                if (st.find(temp2) == st.end())
                {
                    cout << temp2 << "\n";
                    flag = true;
                    break;
                }

                temp2.pop_back();
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        set<string> st2;
        for (int i = 2; i < n; i++)
        {
            string temp3 = "";
            temp3 += s[i - 2];
            temp3 += s[i - 1];
            temp3 += s[i];
            st2.insert(temp3);
        }
        flag = false;
        for (int i = 0; i < 26; i++)
        {
            string temp2 = "";
            char ch = i + 97;
            temp2 += ch;

            for (int j = 0; j < 26; j++)
            {
                char ch = j + 97;
                temp2.pb(ch);
                for (int k = 0; k < 26; k++)
                {
                    char ch2 = k + 97;
                    temp2.pb(ch2);
                    if (st2.find(temp2) == st2.end())
                    {
                        cout << temp2 << "\n";
                        flag = true;
                        break;
                    }
                    temp2.pop_back();
                }
                if (flag)
                {
                    break;
                }

                temp2.pop_back();
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            continue;
        }
    }

    return 0;
}
