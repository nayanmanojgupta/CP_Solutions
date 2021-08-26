#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll n;
	cin>>n;
	ll l=1,r=n,mid,val;
	while(l<=r)
	{
		mid=(l+r)/2;
		ll left=INT_MAX,right=INT_MAX;
		cout<<"? "<<mid<<endl;
		cin>>val;
		if(mid!=1)
		{
			cout<<"? "<<mid-1<<endl;
		    cin>>left;
			
		}
		if(mid!=n)
		{
			cout<<"? "<<mid+1<<endl;
		    cin>>right;
			
		}
		if(val<left && val<right)
		{
			cout<<"! "<<mid<<endl;
			return 0;
		}
		if(val<right)
		   r=mid-1;
		else
		   l=mid+1;
		      
	}
	



	return 0;

}


