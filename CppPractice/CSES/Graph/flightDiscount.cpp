#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
int n, m;
vector<vector<int>> adj;
vector<int> distances;
vector<bool> visited;

void dijkstra()
{
    distances[0]=0;
    priority_queue<pair<int,int> > q; 
    q.push({0,0});
    while(!q.empty())
    {
        int a=q.top().second;
        q.pop();
        if(visited[a])
           continue;
        visited[a]=true;
        for(int i=0;i<n;i++)
        {
            if(adj[a][i])
            {
                int b=i;
                int w=adj[a][i];
                distances[b]=min(distances[b],distances[a]+w);
                q.push({-distances[b],b});

            }
        }


    }



}


int main()
{
    boost;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  
   cin>>n>>m;
   adj.resize(n);
   for(int i=0;i<n;i++)
      adj[i].resize(m);

   for(int i=0;i<m;i++)
   {
       int u,v,w;
       cin>>u>>v>>w;
       u--,v--;
       adj[u][v]=w;

   }
   distances.resize(n,INT_MAX);
   visited.resize(n,false);
   dijkstra( );
   cout<<distances[n-1]<<"\n";


    return 0;
}
