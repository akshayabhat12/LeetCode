#include<unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(!s.length())
        {
            return 0;
        }
        unordered_map<char,int> hash;
        int maxi=1;
        int cur=1;
        int l=0;
        int r=0;
        hash[s[0]]=0;
        while(r<s.length()-1)
        {
            if(hash.find(s[r+1])!=hash.end())
            {
                while(l<=hash[s[r+1]])
                {
                    hash.erase(s[l]);
                    l++;
                }
                r++;
                hash[s[r]]=r;
                cur = r-l+1;
                maxi=max(maxi,cur);
            }
            else
            {
                r++;
                hash[s[r]]=r;
                cur = r-l+1;
                maxi=max(maxi,cur);
            }
        }
        return maxi;
    }
};