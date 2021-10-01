#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> g;
vector<bool> visited;
vector<int> parent;


void bfs()
{
   
    queue<int> q;
    q.push(1);
    visited[1]=true;
    while(!q.empty())
    {
     
        int a=q.front();
        q.pop();
    
        for(auto u:g[a])
        {
                if(!visited[u])
                {
                    visited[u]=true;
                     q.push(u);
                    parent[u] = a;

                }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cin.tie(NULL);
    cin >> n >> m;
    g.resize(n+1);
    visited.resize(n + 1);
    parent.resize(n+1);
    for (int i = 0; i <= n; ++i)
    {
        parent[i] = -1;
    }
    for (auto i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs();
    if (parent[n] == -1)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> ans;
    ans.push_back(n);
    for(int i=parent[n];i!=-1;i=parent[i])
    {
        ans.push_back(i);
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto x:ans)
         cout<<x<<" ";
         cout<<"\n";

    



  
   return 0;
}