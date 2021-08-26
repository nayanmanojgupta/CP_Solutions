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
			ll n,d;
			cin>>n>>d;
			ll arr[n];
			bool check=false,check2=false;
			fi
			{
				cin>>arr[i];
				if(arr[i]>d)
				   check=true;
				   
			}
			if(!check)
			{
				cout<<"Yes\n";
				continue;
			}
			
			fi
			{
				for(ll j=i+1;j<n;j++)
				{
					if(arr[i]+arr[j]<=d)
					{
						check2=true;
						cout<<"Yes\n";
						break;
					}
				
				}
					if(check2)
					   break;
			}
			if(check2)
			   continue;
			   
			   cout<<"No\n";
			   
			   
			
			
		


    }

	return 0;

}


