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
        int n,k;
        cin>>n>>k;
        if(n<=k)
          {
              cout<<"1\n";

          }
          else
          {
              int ans=INT_MAX;
              for(int i=1;i*i<=n;i++)
              {
                  if(n%i==0)
                  {
                      if(i<=k)
                        ans=min(ans,n/i);

                      if( (n/i)<=k )
                        {
                            ans = min(ans,i);
                           
                        } 
                  }
              }
              cout << ans << "\n";
          }
      
        

          
    }

    return 0;
}
