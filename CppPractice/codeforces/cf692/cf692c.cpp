#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(int i=0;i<n;i++)
using namespace std;
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll n,m;
		cin>>n>>m;
		ll k[n],c[m];
		for(ll i=0;i<n;i++)
		{
			 cin>>k[i];
			 k[i]--;
		}
		
		for(ll i=0;i<m;i++)
		    cin>>c[i];
		 
	    sort(k,k+n,greater<int>());
// 		for(int i=0;i<n;i++)
// 		{
// 			 cout<<k[i]<<" ";
// 		}
		ll sum=0;
		ll j=0;
		for(ll i=0;i<n;i++)
		{
			if(k[i]<m){
			    if(i>=m)
			      j=m-1;
				ll temp=min(c[k[i]],c[j]);
				// cout<<c[k[i]]<<" "<<c[i]<<"\n";
				// cout<<temp<<"\n";
				sum+=temp;	
			}
			j++;
			
		}
		
		cout<<sum<<"\n";
		  
		
	}

	


	return 0;

}



