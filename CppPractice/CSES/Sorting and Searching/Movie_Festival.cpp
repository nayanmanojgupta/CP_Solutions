#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);
#define ll long long int
 
bool compare(pair<int,int>  a,pair<int,int> b) {    
  return (a.second<b.second);
}
 
 
int main()
{
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
 //   freopen("output.txt", "w", stdout);
    #endif
 
   fastio;
 
   int n;
   cin>>n;
 
   vector<pair<int,int>> movie;
 
   int x,y;
   for(int i=0;i<n;i++) {
       cin>>x>>y;
       movie.push_back({x,y});
   }
 
   sort(movie.begin(),movie.end(),compare);
 
   int count=1;
   int endtime=movie[0].second;
 
   for(int i=1;i<n;i++) {
       if(movie[i].first>=endtime) {
        count++;
        endtime=movie[i].second;
       }
   } 
   
   cout<<count;
 
 
 
}
 