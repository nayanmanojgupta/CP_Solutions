#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cerr.tie(NULL);
#define ll long long int
#define M 1000000007
 
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
   set<ll> s;
   ll temp;
   for(ll i=1;i<=n;i++) {
    cin>>temp;
      s.insert(temp);
    }
   cout<<s.size();
}