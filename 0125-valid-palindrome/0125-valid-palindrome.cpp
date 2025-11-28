class Solution {
public:
    bool isPalindrome(string s) 
    {
        string a;
        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            {
                a.push_back(tolower(s[i]));
            }
        }
        int left=0;
        int right=a.length()-1;
        while(left<right)
        {
            if(a[left]!=a[right])
            {
                return 0;
            }
            left++;
            right--;
        }
       return 1;
       
    }
};