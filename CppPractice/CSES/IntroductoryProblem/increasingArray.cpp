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
   ll n;
   cin>>n;
   int arr[n];
   fi
     cin>>arr[i];
   ll ans=0;  
   for(int i=1;i<n;i++)
   {
        if(arr[i]<arr[i-1])
        {
            ans+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];

        }
   }  

    cout<<ans<<"\n";
    

    return 0;
}
