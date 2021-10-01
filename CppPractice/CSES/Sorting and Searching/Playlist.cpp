#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);
#define ll long long int
#define pb push_back
#define mod 1000000007
#define tcase ll t; cin>>t; while(t--)
 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
   fastio;
 
   ll n;
   cin>>n;
 
   ll arr[n];
 
   for(ll i=0;i<n;i++)
    cin>>arr[i];
 
   map<ll,ll> st;
 
   ll ans=0;
   st.insert({arr[0],0});
 
   ll ptr=0;
 
   ll i;
 
   for(i=1;i<n;i++) 
   {
       if(st.find(arr[i])!=st.end()) 
       {
            ll len=i-ptr;
            ans=max(ans,len);    
            auto it=st.find(arr[i]);
            ptr=max(ptr,it->second+1);
            it->second=i;
       }
       else
        {
            ll len=i-ptr;
            ans=max(ans,len);  
            st.insert({arr[i],i});
        }   
 
          
   }
 
    ll len=i-ptr;
    ans=max(ans,len);
 
   cout<<ans<<endl;
 
   
 
 
   cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0;
}