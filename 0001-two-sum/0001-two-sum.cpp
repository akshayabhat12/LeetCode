#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> sum;
         for(int i=0;i<nums.size();i++)
        {
           int req = target - nums[i];
           if(sum.count(req))
           {
                return{sum[req],i};
           }
           sum[nums[i]]=i;
        } 
        return {};
    }
};