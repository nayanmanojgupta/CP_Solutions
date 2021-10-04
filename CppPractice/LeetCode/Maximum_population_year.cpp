//link:  https://leetcode.com/problems/maximum-population-year/
class Solution {
public:
    
    int maximumPopulation(vector<vector<int>>& logs) {
        int max=-10,max_year;
        int year_count=0;
         for(int j=1950;j<2050;j++){
          for(int i=0;i<logs.size();i++){
                if(j>=logs[i][0]&&j<logs[i][1]){
                    year_count++;
                    if(max<year_count){
               max=year_count;
               max_year=j;} 
                }
               
            } year_count=0;
        }return max_year;
        }
};
