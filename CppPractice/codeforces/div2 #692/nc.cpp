#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(int i=0;i<n;i++)
using namespace std;
int p[100000];
int find(int x)
{
	if(x==p[x])
	   return x;
	return p[x]=find(p[x]);   
	   
}




int main()
{
	boost;
	int t;
	cin>>t;
	while(t--)
	{
			int n,m;
			cin>>n>>m;
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				p[i]=i;
			}
			while(m--)
		{
				int x,y;
					cin>>x>>y;
					if(x==y)
						continue;
					ans++;
					if(find(x)==find(y))
					   ans++;
					 p[find(x)]=p[find(y)];
					   	
		}
		    cout<<ans<<endl;
				
	}




	return 0;

}


