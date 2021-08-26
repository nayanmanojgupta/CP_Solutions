// Code Not Working

#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define  pb push_back
using namespace std;
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
				ll n,alice=0,bob=0;
				cin>>n;
				 vector<ll> a(n);
				 fi
				 {
				 	cin>>a[i];
				 }
				 vector<ll> odd;
				 vector<ll> even;
				 fi
				 {
				 	if(a[i]%2==0)
				 	   even.pb(a[i]);
				 	else
					  odd.pb(a[i]);   
				 }
				 if(even.size()==0)
				    {cout<<"Bob\n";
				    continue;
					}
				if(odd.size()==0)
				   {
				   	cout<<"Alice\n";
				   	continue;
				   }
				    
				 sort(even.rbegin(),even.rend());
				 
				 sort(odd.rbegin(),odd.rend());
//				 cout<<even.size()<<"\n";
//				 cout<<odd.size()<<"\n";
				 
				 ll j=0,k=0;
				 
				 fi
				 {
				 	if(j>=even.size())
				 	   even[j]=0;
				 	else if(k>=odd.size())
					      odd[k]=0;
						     
				 	if(i%2==0)
				 	{
				 		if(even[j]>odd[k])
				 		   {
				 		   	     alice+=even[j];
				 		   	     j++;
							}
						else
						{
							k++;
							}	
					 }
					 
					 else
					 {
					 	if(odd[k]>even[j])
					 	{
					 		bob+=odd[k];
					 		k++;
						 }
						 else
						 {
						 	j++;
						 }
					 }
				 }
				 
				 if(alice==bob)
				    cout<<"Tie\n";
				 else if(alice>bob)
				    cout<<"Alice\n";
				else
				    cout<<"Bob\n";
					   
				 
				 
	}




	return 0;

}


