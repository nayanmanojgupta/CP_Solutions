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
			int n;
			cin>>n;
			vector<int> a(n);
			fi
			{
				cin>>a[i];
			}
			vector <int> ans(n);
			for(int i=n-1;i>=0;i--)
			{
				ans[i]=a[i];
				int j=i+a[i];
				if(j<n)
				{
					ans[i]+=ans[j];

					
				}
			}
			
			cout<<*max_element(ans.begin(),ans.end())<<"\n";
			
			
			
			
	}




	return 0;

}


