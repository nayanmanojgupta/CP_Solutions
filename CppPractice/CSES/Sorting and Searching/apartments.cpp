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
   
   ll n,m,k;
   cin>>n>>m>>k;
   ll a[n],b[m];
   for(ll i=0;i<n;i++)
    cin>>a[i];
   for(ll i=0;i<m;i++)
    cin>>b[i];
   sort(a,a+n);
   sort(b,b+m);
   ll count=0;
   ll i=0;
   ll j=0;
   while(i<n && j<m) {
      if(b[j]<a[i]-k)
        j++;
      else if(b[j]>a[i]+k)
        i++;
      else {
        i++;
        j++;
        count++;
      }
   }
   cout<<count<<endl;
}