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
			int arr[n];
			int mine=INT_MAX;
			fi
			  {
			  	cin>>arr[i];
			  	mine=min(arr[i],mine);
			  }
			  ll count=0;
			fi
			{
				if(arr[i]>mine)
				   count++;
			}
			
			cout<<count<<"\n";
			
		
			
	}




	return 0;

}


