#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
			ll n;
			cin>>n;
			ll k=0;
			if(n==1)
			   cout<<"9";
			else if(n==2)
			   cout<<"98";
			else if(n==3)
			    cout<<"989";
			else
			{
				cout<<"989";
				for(int i=0;i<n-3;i++)
				{
						 if(k==10)
						    k=0;
						 cout<<k++;
						 	
				}
				   
				    
					  }	      
			cout<<"\n";
			
	}




	return 0;

}


