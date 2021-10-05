// https://leetcode.com/contest/weekly-contest-261/problems/find-missing-observations/
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int som=0 ;// sum of m elements
        int m=rolls.size();
        vector<int> nums;
            for(int i=0;i<rolls.size();i++)
                som+=rolls[i];
        
        int son=(m+n)*mean - som; //son is som of left n elements
        
        while (n and son>0)
    {
        int k=son/n;
            if(k<=6 and k>0)
        nums.push_back(k);
            else{
                nums.clear();
                break;
            }
        son=son-k;
        n--;
    }
        return nums;
    }
};
