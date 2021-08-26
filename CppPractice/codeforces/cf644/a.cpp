#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long

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
        ll a,b;
        cin>>a>>b;
        ll ans;
        
         if(a>=b)
         {
             ll c1=b;
             c1*=2;
             ll c2=max(c1,a);
             ans=c2*c2;


         }
         else if (b > a)
         {
             ll c1 = a;
             c1 *= 2;
             ll c2 = max(c1, b);
             ans = c2 * c2;
         }

         cout<<ans<<"\n";


    }

    return 0;
}
