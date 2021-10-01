/*
Problem link: https://www.codechef.com/MAY21B/problems/THOUSES/
*/
#include "bits/stdc++.h"
using namespace std;
#define ar treeay
#define ll long long
#define endl "\n"
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

vector<pair<ll, VI>> tree;
VI noOfChild;
// size tree
vector<pair<ll, int>> sizetree;


// dfs call
void dfs(int u, int parent = -1)
{
    for (auto x : tree[u].second)
    {
        if (x == parent)
            continue;
        dfs(x, u);
    }

    sizetree.clear();
    for (auto x : tree[u].second)
    {
        if (x != parent)
            sizetree.push_back({tree[x].first, x});
    }
    //reverse  sort according to tree size 
    sort(sizetree.rbegin(), sizetree.rend());

    // update tree size
    int value = 1;
    for (auto x : sizetree)
    {
        noOfChild[x.second] = value++;
    }

    // update the no of childerns
    for (auto x : sizetree)
    {
        tree[u].first += noOfChild[x.second] * tree[x.second].first;
    }
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    tree.clear();
    tree.resize(n + 1);
    noOfChild.clear();
    noOfChild.resize(n + 1);

    for (int i = 0; i <= n; i++)
    {
        tree[i].first = 1;
        noOfChild[i] = 0;
    }

    // firstly make a graph
    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        tree[u].second.push_back(v);
        tree[v].second.push_back(u);
    }
    // call the dfs at the root node

    dfs(1, -1);

    // final answer is computed at the root node
    cout << ((tree[1].first % MOD) * (x % MOD)) % MOD << endl;
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