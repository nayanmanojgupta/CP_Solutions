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
		int freq[n+1]={0};
		int ans=0;
		fi
		{
			cin>>arr[i];
			freq[arr[i]]++;
			ans=max(ans,freq[arr[i]]);
		}
		cout<<ans<<"\n";
		
	}




	return 0;

}


