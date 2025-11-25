class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        long long int rev=0;
        int digit;

        int temp=x;

        while(temp>0)
        {
            digit=temp%10;
            rev=rev*10+digit;
            temp=temp/10;
        }

        if(rev==x)
            return 1;
        else
            return 0;
    }
};