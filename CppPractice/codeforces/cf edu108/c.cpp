#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount
using namespace std;

vector<int> S[200005];
vector<ll> sums[200005];
vector<ll> suf[200005];
ll final[200005];

int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, i, u[200005]{}, s, temp, lost, k, j;
        cin >> n;
        for (i = 1; i <= n; ++i)
        {
            S[i].clear();
            sums[i].clear();
            suf[i].clear();
            final[i] = 0;
        }
        for (i = 1; i <= n; ++i)
            cin >> u[i];
        for (i = 1; i <= n; ++i)
        {
            cin >> s;
            S[u[i]].push_back(s);
        }
        for (i = 1; i <= n; ++i)
        {
            if (S[i].size())
            {
                sort(S[i].begin(), S[i].end(), greater<int>());
                sums[i].resize(S[i].size());
                suf[i].resize(S[i].size() + 1);
                for (int z : S[i])
                    sums[i][0] += z;
                final[1] += sums[i][0];
                suf[i][S[i].size()] = 0;
                for (j = S[i].size() - 1; j >= 0; --j)
                    suf[i][j] = suf[i][j + 1] + S[i][j];
                for (j = 1; j < S[i].size(); ++j)
                {
                    sums[i][j] = sums[i][0];
                    lost = S[i].size() % (j + 1), k = S[i].size() - 1;
                    sums[i][j] -= suf[i][S[i].size() - lost];
                    final[j + 1] += sums[i][j];
                }
            }
        }
        for (i = 1; i <= n; ++i)
            cout << final[i] << ' ';
        cout << '\n';
    }
}