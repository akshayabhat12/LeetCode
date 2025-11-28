class Solution {
public:
    bool isPalindrome(string s) 
    {
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                s[j]=tolower(s[i]);
                j++;
            }
        }
        int left=0;
        int right=j-1;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                return 0;
            }
            left++;
            right--;
        }
       return 1;
       
    }
};