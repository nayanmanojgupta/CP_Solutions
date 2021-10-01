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
   
   string s;
   cin>>s;
   vector<string> ans;
   sort(s.begin(),s.end());
   do
   {
       ans.pb(s);
   }while(next_permutation(s.begin(),s.end()));

   cout<<ans.size()<<'\n';
   for(auto x:ans)
       cout<<x<<"\n";
       

    return 0;
}
