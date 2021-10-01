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
 
   ll x,n;
   cin>>x>>n;
 
   set<ll> st;
   multiset<ll> lengths;
   st.insert({0,x});
   lengths.insert(x);
   
   ll pos;
 
   for(int i=0;i<n;i++) 
   {
      cin>>pos;
      
      auto prev=st.lower_bound(pos);
      prev--;
      auto next=st.upper_bound(pos);
      ll len=(*next)-(*prev);
      ll l1=(*next)-pos;
      ll l2=pos-(*prev);
 
      auto xx=lengths.find(len);
 
      lengths.erase(xx);
      lengths.insert({l1,l2});
      st.insert(pos);
 
     cout<<*lengths.rbegin()<<" ";
 
   }
 
 
   cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0;
}