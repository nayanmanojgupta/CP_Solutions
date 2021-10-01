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
 
   multiset<ll> st;  //tower top
 
   st.insert(arr[0]);
 
   for(int i=1;i<n;i++) 
   { 
       auto it=st.upper_bound(arr[i]);
 
       if(it==st.end()) {
        st.insert(arr[i]);
       }
       else {
 
          st.erase(it);
          st.insert(arr[i]);
       }
   }
 
   cout<<st.size();
 
 
   cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0;
}