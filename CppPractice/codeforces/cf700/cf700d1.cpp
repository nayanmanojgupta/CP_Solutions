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
	int a[n];
	fi
	{
		cin>>a[i];
	}
	ll ans=0;
	pair<int,int> prev2,prev;
	prev.first=INT_MAX;
	prev.second=-1;
	prev2.first=INT_MAX;
	prev2.second=-1;
	int freq[100001]={0};
	fi
	{
		if(i!=0)
		{
			if(a[i]!=a[i-1])
			{
				prev2.first=prev.first;
				prev2.second=prev.second;
				prev.first=freq[a[i-1]];
				prev.second=a[i-1];
				
				
			freq[a[i-1]]=0;
			}
			
		}
		freq[a[i]]++;
		if(freq[a[i]]==1 )
		  ans++;  
		if(freq[a[i]]==2)
		{
			if(prev.first>1 || (prev2.second==a[i] && prev2.first%2!=0) || (prev2.second!=a[i]))
			   ans++;
		  }  
		  
	}
	cout<<ans<<"\n";
	




	return 0;

}


