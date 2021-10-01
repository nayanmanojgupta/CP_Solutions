#include<bits/stdc++.h>
using namespace std;
bool visited[1000][1000];
pair<int,int> parent[1000][1000];
vector<pair<int,int> > moves={{-1,0},{1,0},{0,-1},{0,1}};

int ax,ay,bx,by;
int n,m;
bool isValid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
       return false;
    if(visited[i][j])
      return false;

    return true;


}
void bfs()
{
    queue<pair<int,int> > q;
    q.push({ax,ay});
    
    while(!q.empty())
    {
        int a=q.front().first;
        int b=q.front().second;
        q.pop();

        if(!visited[a][b])
        {
            visited[a][b]=true;
            for(auto x:moves)
            {
                if(isValid(x.first+a,x.second+b))
                {
                    q.push({x.first+a,x.second+b});
                    parent[x.first+a][x.second+b]={x.first,x.second};

                }
            }
        }




    }
    
}

int main()
{
    #ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
    #endif

   
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char x;
            cin>>x;
            if(x=='#')
              visited[i][j]=true;
            else if(x=='A')
               ax=i,ay=j;
            else if(x=='B')
               bx=i,by=j;



        }
    }

    bfs();
     if(!visited[bx][by])
        {
            cout<<"NO\n";
           return 0;
           
        }

        cout<<"YES\n";

     vector<pair<int,int>> ans;
	pair<int,int> end = {bx,by};
 
	while(end.first != ax or end.second != ay)
	{
		ans.push_back(parent[end.first][end.second]);
		end.first -= ans.back().first;
		end.second -= ans.back().second;	
	}
 
	reverse(ans.begin(), ans.end());
	cout << ans.size() << endl;
	for(auto c: ans)
	{
		if(c.first == 1 and c.second ==0)
		{
			cout << 'D';
		}
		else if(c.first == -1 and c.second ==0)
		{
			cout << 'U';
		}
		else if(c.first == 0 and c.second == 1)
		{
			cout << 'R';
		}
		else if(c.first == 0 and c.second == -1)
		{
			cout << 'L';
		}
	}




    return 0;

}