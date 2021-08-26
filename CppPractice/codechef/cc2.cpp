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
			int n;
			cin>>n;
			int arr[n];
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
			bool check=false;
			for(int i=1;i<n-1;i++)
			{
				if(arr[i]<arr[i-1])
				{
					if(arr[i+1]>arr[i])
					{
					}
					else
					{
						check=true;
						break;
						
					}
				}
				if(arr[i]==arr[i-1])
				{
					if(arr[i]==arr[i+1])
					{
						check=true;
						break;
					}
				}
			}
			
			if(n==2)
			{
				if(arr[0]>=arr[1])
				   check=true;
			}
			
			if(check)
			{
				cout<<"NO\n";
				
			}
			else
			   cout<<"YES\n";
			   
	}




	return 0;

}


