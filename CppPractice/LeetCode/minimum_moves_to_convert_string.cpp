// https://leetcode.com/contest/weekly-contest-261/problems/minimum-moves-to-convert-string/
class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;int i=0;
        while(i<s.length())
        {
            if(s[i]=='O') {
                i++;continue;
            }
            if(s[i]=='X')
            {
                i=i+3;
                ans++;
            }
        }
        return ans;
    }
};
