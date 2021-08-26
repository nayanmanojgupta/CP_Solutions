#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(int i=0;i<n;i++)
using namespace std;
int main()
{
	boost;
	int tc;
	cin>>tc;
	while(tc--)
	{
			int n,x;
			cin>>n>>x;
			int arr[n];
			ll max=0,sum=0;
			fi{
					cin>>arr[i];
					max+=ceil(arr[i]/(x*1.0));
				
					sum+=arr[i];
					
			}
			ll min=ceil(sum/(x*1.0));
			cout<<min<<" "<<max<<"\n";
			
		
			
		
			
			
			
	}




	return 0;

}


