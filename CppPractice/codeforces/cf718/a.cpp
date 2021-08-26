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
       ll n;
       cin>>n;
       double long d=n*1.0/2050;
    //    cout<<d<<"\n";
       ll temp=n/(2050),ans=0;
       if(d!=temp)
       {
           cout << "-1\n";
           continue;
       }
          

       while(temp)
       {
           ans+=temp%10;
           temp/=10;

       }
       if (ans != 0)
           cout << ans << "\n";
       
    }
   

    return 0;
}
