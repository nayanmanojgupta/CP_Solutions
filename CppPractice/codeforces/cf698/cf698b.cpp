#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int nofdigits(int n)
{
	int ans=floor(log10(n)+1);
	ans=pow(10,ans-1);
	return ans;
}
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll q,d;
		cin>>q>>d;
		int arr[q];
		for(int i=0;i<q;i++)
		{
			cin>>arr[i];
			bool check=false,is=false;
			if(arr[i]>=d*10)
			{
				cout<<"YES\n";
				continue;
			}
			while(1)
			{
				int nd=nofdigits(arr[i]);
				if(arr[i]%d!=0 || nd==100)
				{
					if(nd<10)
					   {
					   	    is=true;
					   }
					   
					 arr[i]-=nd;
//					 cout<<arr[i]<<"\n";
					 if(arr[i]==0)
					    is=true;      
					
					
				}
				else
				{
					cout<<"YES\n";
					check=true;
					break;
				}
				if(is)
				{
					cout<<"NO\n";
					break;
				}
			}

			   
		}
	}




	return 0;

}


