#include<unordered_map>
class Solution {
public:
    long long int Nc2(int n)
    {
        return (n*(n-1)/2);
    }

    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(auto cur:freq)
        {
            if(cur.second>1)
            {
                count = count + Nc2(cur.second);
            }
        }
        return count;
    }
};