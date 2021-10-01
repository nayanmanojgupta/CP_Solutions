// Created by ...
#include <bits/stdc++.h>

#define vll vector< ll >
#define M 100000
#define MD 1000000007
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define pii pair<ll,ll>
#define vec(a) vector<a >
#define all(a) (a).begin(),(a).end()
#define se second
#define fi first
#define inf 0xffffffff
#define int long long
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define per(i,b,a) for(ll i=b;i>=a;--i)
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define EACH(x, a) auto _Itr=begin(a);for (auto x=*_Itr;_Itr!=end(a);_Itr=next(_Itr),x=*_Itr)

using namespace std;
using ll = long long;
using ld = long double;
ll md = MD;

template<class... Args> auto Vec(size_t n, Args&&... args) {
    if constexpr(sizeof...(args) == 1)return vector(n, args...);
    else return vector(n, Vec(args...));
}
template<class T, class... Args> void DBS(T t, Args... args) {
    cerr << t;
    if constexpr(sizeof...(args) == 0) cerr << "]\n";
    else cerr << ", ", DBS(args...);
}
#ifdef _DEBUG
#define db(...) cerr << "[" << #__VA_ARGS__ << "]: [", DBS(__VA_ARGS__)
#else
#define db(...) 0
#endif

ll exp(ll a, ll b) {ll r = 1ll; while (b > 0) {if (b & 1) {r = r * (a % md); r = (r + md) % md;} b >>= 1; a = (a % md) * (a % md); a = (a + md) % md;} return (r + md) % md;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
template<class T> T Min(T a, T b) {if (a < b)return a; return b;}
template<class T> T Max(T a, T b) {if (a > b)return a; return b;}

void solve() {
    int n, m, k; cin >> n >> m >> k;
    // check if the graph is connected and no multiple edges/self loops.
    if (m < n - 1 || m > (n * (n - 1) / 2)) {
        cout << "NO";
    }
    else if (n == 1) { // diameter is 0
        if (k > 1)cout << "YES";
        else cout << "NO";
    }
    else if (n == 2) { // diameter is 1
        if (1 < k - 1)cout << "YES";
        else cout << "NO";
    }
    else {
        if (1 < k - 2)cout << "YES"; // diameter can be 2
        else {
            if (k == 3 && m == (n * (n - 1) / 2))cout << "YES"; // diameter is 1 only if graph fully connected
            else cout << "NO";
        }
    }
    cout << endl;
}

int32_t main() {
    IOS;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    oreturn 0;
}