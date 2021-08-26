//  Contest is 694 not 692
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
			ll n,x;
			cin>>n>>x;
			vector<ll> v(n);
		    ll sum=0;
		    fi
		    {
		    	cin>>v[i];
			}
			ll i=0;
			bool check=true;
			ll round=0,count=0; 
			while(i!=v.size())
			{	count++;
				if(check)
				{
					if(v[i]%x==0)
					{
						v.pb(v[i]/x);
						sum+=v[i]*(pow(x,round));
					}
					else
					{
						sum+=v[i]*(pow(x,round));
						check=false;
					}
				}
				else
				{
					sum+=v[i]*(pow(x,round));
				}
				
				if(count==n)
				   {
				   	count=0;
				   	round++;
				   }
				
				
				i++;
			}
			
			cout<<sum<<"\n";
			
			
			
			
			
			
				
			
			
	}




	return 0;

}


