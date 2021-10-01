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
   ll arr[n];
   for(ll i=0;i<n;i++)
   	cin>>arr[i];
   
   sort(arr,arr+n);
   ll count=n;
   ll i=0,j=n-1;
	while(i<j)
	{
		if(arr[i]+arr[j]<=x) {
			count--,i++,j--;
		}
		else j--;
	}
	cout<<count<<endl;
}