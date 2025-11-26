class Solution {
public:
    void mergeArray(vector<int>& arr, int left, int mid, int right)
    {
        vector<int> Left,Right;
        for(int i=left;i<=mid;i++)
        {
            Left.push_back(arr[i]);
        }
        for(int i=mid+1;i<=right;i++)
        {
            Right.push_back(arr[i]);
        }

        int i=0,j=0,k=left;

        while(i<Left.size() && j<Right.size())
        {
            if(Left[i]<Right[j])
            {
                arr[k]=Left[i];
                k++;
                i++;
            }
            else
            {
                arr[k]=Right[j];
                k++;
                j++;
            }
        }
        while(i<Left.size())
        {
            arr[k]=Left[i];
                k++;
                i++;
        }
        while(j<Right.size())
        {
            arr[k]=Right[j];
                k++;
                j++;
        }

    }

    void mergeSort(vector<int>& arr, int left, int right)
    {
        if(left>=right)
            return;
        int mid = (left+right)/2;

        mergeSort(arr,left, mid);
        mergeSort(arr,mid+1,right);
        mergeArray(arr,left,mid,right);

    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};