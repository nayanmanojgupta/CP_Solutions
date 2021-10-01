#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);
#define ll long long int
 
 
 
int main()
{
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
   fastio;
 
   ll n,x;
   cin>>n>>x;
   vector<pair<ll,ll>> arr;
   
   arr.push_back({INT_MIN,INT_MIN});
   
   ll y;
   for(ll i=1;i<=n;i++) {
    cin>>y;
    arr.push_back({y,i});
   } 
   
   sort(arr.begin()+1,arr.end());
  
   ll i=1,j=n;
   bool flag=false;
   while(i<j) {
     if(arr[i].first+arr[j].first==x) {
      cout<<arr[i].second<<" "<<arr[j].second;
      flag=true;
      break;
     }
     else if(arr[i].first+arr[j].first<x) {
      i++;
     }
     else {
      j--;
     }
   }
   if(flag==false)
    cout<<"IMPOSSIBLE";
}