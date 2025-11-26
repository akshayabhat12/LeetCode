class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) 
    {
        if(n==0)
        {
            return;
        }
        if(m==0)
        {
            for(int i=0;i<n;i++)
            {
                num1[i]=num2[i];
            }
            return;
        }
        vector<int> arr;

    int i=0,j=0;
    int flag=0;
    while(flag==0)
    {
        if(num1[i]<num2[j])
        {
            arr.push_back(num1[i]);
            if(i<m-1)
                i++;
            else
                flag=1;
        }
        else if(num2[j]<num1[i])
        {
            arr.push_back(num2[j]);
            if(j<n-1)
                j++;
            else
                flag=-1;
        }
        else
        {
            arr.push_back(num2[j]);
            arr.push_back(num2[j]);

            if(i==m-1  && j<n-1)
            {
                j++;
                flag=1;
            }
            else if(j==n-1 && i<m-1)
            {
                i++;
                flag=-1;
            }
            else if(i<m-1 && j<n-1)
            {
                i++;
                j++;
            }
            else if(i==m-1 && j==n-1)
            {
                flag=-2;
            }
        }
    }

    if(flag==1)
    {
        while(j<n)
        {
            arr.push_back(num2[j]);
            j++;
        }
    }
    else if(flag==-1)
    {
        while(i<m)
        {
            arr.push_back(num1[i]);
            i++;
        }
    }

        for(i=0;i<m+n;i++)
        {
            num1[i]=arr[i];
        }
    }
};