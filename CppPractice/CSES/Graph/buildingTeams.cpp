#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
int n, m;
vector<int> g[1000000];
vector<int> color(100000,0);
vector<bool> vis(100000,0);
 
bool dfs(int u, int c, int par)
{
	vis[u] = true;
	color[u] = c;
 
	for(auto v: g[u])
	{
		if(v == par) continue;
		if(color[v] == 0)
			if(!dfs(v, (color[u]^3), u)) 
				return false;
		if(color[v] == color[u]) 
			return false;
	}
	return true;
}
 
bool color_all()
{
	for(int i = 1; i <= n; ++i)
	{
		if(!vis[i])
			if(!dfs(i,1,-1)) 
				return false;
	}
	return true;
}
int main()
{
	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	cin>>n>>m;
	// g.resize(n+1);
	color.resize(n+1);
	vis.resize(n+1);

	for(int i=0;i<m;++i)
	{
		int a,b;
		cin>> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);

	}

	bool ans=color_all();
	// bool ans=dfs(0,1);
	if(!ans)
	{
		cout<<"IMPOSSIBLE"<<endl;
		return 0;

	}

	for(int i=1;i<=n;++i)
	{
		cout<<color[i]<<" ";

	}


	
	return 0;
}