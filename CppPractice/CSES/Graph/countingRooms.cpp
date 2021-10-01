#include<bits/stdc++.h> 
using namespace std;
int n,m,rooms;
bool visited[1000][1000];
vector< pair<int,int> > moves={{-1,0},{1,0},{0,-1},{0,1}};

bool isValid(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m)
      return false;
    if(visited[x][y])
       return false;
    
    return true;


}
void dfs(int i,int j)
{
    visited[i][j]=true;
    for(auto x:moves)
    {
        if(isValid(i+x.first,j+x.second))
        {
                dfs(i+x.first,j+x.second);

        }
    }
}
void connected_components()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j])
            {
                dfs(i,j);
                rooms++;


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
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='#')
              visited[i][j]=true;
              
        }
    }    

    connected_components();
    cout<<rooms<<"\n";





	return 0;

}
