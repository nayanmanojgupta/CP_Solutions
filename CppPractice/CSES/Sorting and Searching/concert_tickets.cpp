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
 
   int n,m;
   cin>>n>>m;
   multiset<int> h;
   int x;
   for(int i=0;i<n;i++) {
    cin>>x;
    h.insert(x);
   } 
 
   int y;
   for(int i=0;i<m;i++) 
   {
    cin>>y;
     auto index=h.upper_bound(y);  //pointer to that position
     if(index!=h.begin()) {
      index--;
      cout<<*(index);
       h.erase(index);
     }
     else
      cout<<-1;
    cout<<"\n";
   }
}
 