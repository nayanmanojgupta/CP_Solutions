/*
problem link: https://www.codechef.com/MAY21B/problems/VPATH/
*/
#include "bits/stdc++.h"
using namespace std;
#define ar array
#define ll long long
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REPD(i, n) for (int i = n - 1; i >= 0; i--)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define el printf(" \n")
#define eb printf(" ")
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
VVI adj;
vector<ll> start, Total;

// calculate the combination starting this.....
void dfs(int u, int parent = -1)
{
    start[u] = 1, Total[u] = 1;
    for (auto x : adj[u])
    {
        if (x == parent)
            continue;
        dfs(x, u);
        start[u] += (2 * start[x] % MOD);
        start[u] %= MOD;
    }
}

// calculate combination including this...
void dfs2(int u, int parent = -1)
{

    ll sum = 0;
    for (auto x : adj[u])
    {
        if (x == parent)
            continue;
        dfs2(x, u);
        Total[u] += Total[x];
        Total[u] %= MOD;
        Total[u] += start[x];
        Total[u] %= MOD;
        sum += start[x];
    }
    for (auto x : adj[u])
    {
        if (x == parent)
            continue;
        Total[u] += (start[x] * ((sum - start[x]))) % MOD;
        Total[u] %= MOD;
    }
}

void solve()
{
    int n;
    cin >> n;
    start.clear();
    Total.clear();
    adj.clear();
    adj.resize(n + 1);
    start.resize(n + 1);
    Total.resize(n + 1);
    // create a graph
    REP(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // dfs first
    dfs(1, -1);
    // wecond dfs call
    dfs2(1, -1);
    cout << Total[1] % MOD << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i  << ": ";
        solve();
    }
    return 0;
}