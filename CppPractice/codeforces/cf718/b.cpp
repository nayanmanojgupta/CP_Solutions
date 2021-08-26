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
int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++)
        {
                vector<int> temp;
                for(int j=1;j<=m;j++)
                {
                    int x;
                    cin>>x;
                    temp.pb(x);

                }
                if(i%2==1)
                {
                        sort(temp.begin(),temp.end());
                        ans.pb(temp);

                }
                else
                {
                    sort(temp.begin(), temp.end());
                    reverse(temp.begin(),temp.end());
                    ans.pb(temp);
                }
        }

        for(auto x:ans)
        {
            for(auto y:x)
                cout<<y<<" ";
                cout<<'\n';
                
        }

    }

    return 0;
}
