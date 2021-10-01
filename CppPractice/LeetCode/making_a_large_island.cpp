#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    
    int numOfIsland(int i , int j , int id , vector<vector<int> > &grid )  {
        if(i < 0 || i >= grid.size() || j < 0 || j>= grid[0].size() || grid[i][j] != 1 ) 
             return 0 ; 
        grid[i][j] = id ; 
        int count = 1 ; 
        count += numOfIsland(i+1,j,id,grid) ; 
        count += numOfIsland(i,j+1,id,grid) ; 
        count += numOfIsland(i-1,j,id,grid) ; 
        count += numOfIsland(i,j-1,id,grid) ;
        return count ; 
    }
    
    int Islands(int i , int j , unordered_map<int , int > &mp , vector<vector<int>> &grid )  {
        int count = 1 ; 
        unordered_map<int , bool > visited ;
        
        if(i+1 < grid.size()  && visited[grid[i+1][j]] == false )  {
            count += mp[grid[i+1][j]]  ; 
            visited[grid[i+1][j]] = true ; 
        }
        
        if(j+1 < grid[0].size()  && visited[grid[i][j+1]] == false )  {
            count += mp[grid[i][j+1]]  ; 
            visited[grid[i][j+1]] = true ; 
        }
        
        if(i-1 >=0  && visited[grid[i-1][j]] == false )  {
            count += mp[grid[i-1][j]]  ; 
            visited[grid[i-1][j]] = true ; 
        }
        
        if(j-1 >=0  && visited[grid[i][j-1]] == false )  {
            count += mp[grid[i][j-1]]  ; 
            visited[grid[i][j-1]] = true ; 
        }
        
        return count ; 
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size() ; 
        int k = 2 ; 
        unordered_map<int , int > mp ; 
        
        for(int i = 0 ; i < n ; i++)  {
            for(int j = 0 ; j < m ; j++ )  {
                if(grid[i][j] == 1) {
                    mp[k] = numOfIsland(i , j , k , grid) ; 
                    k++ ; 
                }
            }
        }
        
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++ )  {
                if(grid[i][j] == 0 )   {
                    ans = max(ans,Islands(i,j,mp,grid)) ; 
                }
            }
        }
        
        if(ans == 0 ) return n*m ; 
        return ans ; 
    }
};

int main()  {
    int n, m ; 
    cin>>n>>m ; 
    vector<vector<int> > grid(n , vector<int>(m , 0)) ; 
    for(int i = 0 ; i < n ; i++ )  {
        for(int j = 0 ; j < m ; j++ )  {
            cin>>grid[i][j] ;
        }
    }

    Solution s ; 
    int ans = s.largestIsland(grid) ; 
    cout<<ans<<endl ;  
}