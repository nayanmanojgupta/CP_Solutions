//Problem link : https://leetcode.com/problems/palindrome-partitioning-ii/

class Solution {
public:
    
    void findPalindrom(string &s , vector<vector<int> > &dp ) {
        int n = s.size() , i , j ; 
        for(i = 0 ; i < n ; i++) {
            dp[i][i] = 1 ; 
            if(i != n-1) 
                 dp[i][i+1] = (s[i] == s[i+1]) ? 1 : 0 ; 
        }
        
        for(int l = 3 ; l<=n ; l++)  {
            i = 0 ; j = l-1 ; 
            while(j < n)  {
                if(s[i] == s[j]) 
                     dp[i][j] = dp[i+1][j-1] ;
                else 
                    dp[i][j] = 0 ;
                i++ ; j++ ;
            }
        }
        
    }
    
    int minCut(string s) {
        int n = s.size() , i , j ; 
        vector<vector<int> > dp(n , vector<int>(n,-1)) ; 
        
        findPalindrom(s , dp) ; 
        
        // int cuts[n] = {} ; 
        vector<int> cuts(n,0) ;
        
        cuts[0] = 0 ; 
        for(i = 1 ; i<n ; i++) {
            if(dp[0][i] == 1) {
                cuts[i] = 0 ; 
                continue ; 
            }
            else {
                cuts[i] = INT_MAX ; 
                for(j = 1 ; j<=i;j++) {
                    if(dp[j][i] == 1 && cuts[i] > cuts[j-1] + 1 )  {
                        cuts[i] = cuts[j-1]+1 ;
                    }
                }
            }
        }
        
        return cuts[n-1] ;
    }
};
