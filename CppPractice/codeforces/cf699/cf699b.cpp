#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
    #endif
	ll tc;
	cin>>tc;
	while(tc--)
	{
			int n,k;
			cin>>n>>k;
			int arr[n];
			fi
			{
				cin>>arr[i];
			}
			vector<int> ki;
			bool check=false;

			while(k--)
			{
				int i;
				for(i=0;i<n-1;i++)
				{
					if(arr[i+1]>arr[i])
					{
						arr[i]++;
						ki.pb(i+1);
						break;
					
					}
				}
				if(i==n)
				{
						ki.pb(-1);
						check=true;
						break;

				}
			}
			if(check)
			{
				cout<<"-1\n";

			}
			else
			{
				cout<<ki[k-1]<<"\n";
			}
	}

	return 0;

}


