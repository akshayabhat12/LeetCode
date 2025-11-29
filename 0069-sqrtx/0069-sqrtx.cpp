class Solution {
public:
    int mySqrt(int x) 
    {
        long long int i;
        if(x<2)
        {
            return x;
        }
        for(i=0;i*i<=x;i++)
        {
            continue;
        }
        return --i;
    }
};