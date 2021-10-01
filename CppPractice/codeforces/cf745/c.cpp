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
    int n, m; cin >> n >> m;
    auto mat = Vec(n + 1, m + 1, 0);
    char c; rep(i, 1, n)rep(j, 1, m)cin >> c, mat[i][j] = c - '0';
    auto lef = mat, up = mat, bot = mat;
    // lef(i, j): Total no of 0 in the left of jth column in the ith row
    // up (i, j): Total no of 0 in the upper side of ith row in jth column.
    // bot(i, j): Total no of 1 from (0, 0) to (i, j) in the matix.
    rep(i, 1, n)rep(j, 1, m) {
        lef[i][j] = lef[i][j - 1];
        up[i][j] = up[i - 1][j];
        if (mat[i][j] == 0)++lef[i][j], ++up[i][j];
        bot[i][j] = bot[i - 1][j] + bot[i][j - 1] - bot[i - 1][j - 1] + mat[i][j];
    }

    int ans = 1e12;
    // Choose every valid pairs of rows and calculate the optimal pair of columns for in O(n).
    // Time complexity will be O(n^3)
    rep(x1, 1, n)rep(x2, x1 + 4, n) {
        int lefmin = 1e12;
        // for each j, we will calulate i,(i+3<=j) which will give the optimal columns stored in lefmin
        rep(j, 1, m) {
            if (j < 4)continue;
            int i = j - 3;

            // update the value of lefmin using the column i
            int val = -lef[x1][i] - lef[x2][i] + (up[x2 - 1][i] - up[x1][i]);
            val += (-bot[x2 - 1][i] + bot[x1][i]);
            lefmin = min(lefmin, val);

            // calculate the value for jth column.
            int currVal = (up[x2 - 1][j] - up[x1][j]) + lef[x1][j - 1] + lef[x2][j - 1];
            currVal += (bot[x2 - 1][j - 1] - bot[x1][j - 1]);

            // update the ans
            ans = min(ans, lefmin + currVal);
        }
    }
    cout << ans << endl;
}

int32_t main() {
    IOS;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}