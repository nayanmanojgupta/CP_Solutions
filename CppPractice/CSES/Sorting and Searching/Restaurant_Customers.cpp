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
   
   /*
   brute force approach
   ll n;
   cin>>n;
   map<ll,ll> v;
 
   ll a,b;
   for(int i=0;i<n;i++) {
   	cin>>a>>b;
   	for(int k=a;k<=b;k++) {
   		auto it=v.find(k);
   		if(it==v.end()) {
   			v.insert({k,1});
   		}
   		else {
   			it->second++;
   		}
   	}
   }
   ll max=INT_MIN;
   for(auto it=v.begin();it!=v.end();it++) {
   	if(it->second>max)
   		max=it->second;
   }
   cout<<max;*/
 
   ll n;
   cin>>n;
   vector<pair<int,int>> v;
   int a,b;
   for(int i=0;i<n;i++) {
   	cin>>a>>b;
   	v.push_back({a,1});
   	v.push_back({b,-1});
   }
   ll sum=0;
   ll max=0;
 
   sort(v.begin(),v.end());
 
  /* for(auto it:v) {
   	cout<<it.first<<" "<<it.second<<endl;
   }*/
 
   for(int i=0;i<2*n;i++) {
     sum=sum+v[i].second;
     if(sum>max)
     	max=sum;
   }
   cout<<max;
}