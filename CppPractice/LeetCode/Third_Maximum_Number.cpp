class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first=-2147483649,second=-2147483649,third=-2147483649;
        for(int i=0;i<nums.size();i++){
            if(first<nums[i]) first=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        { 
            if(second<nums[i]&&nums[i]<first) second=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        { 
            if(third<nums[i]&&nums[i]<second) third=nums[i];
        }
        if(third>-2147483649) return third;
        else return first;
    }
};
