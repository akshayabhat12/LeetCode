class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0, odd = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        // Insert 'even' number of 0s
        for (int i = 0; i < even; i++) {
            ans.push_back(0);
        }

        // Insert 'odd' number of 1s
        for (int i = 0; i < odd; i++) {
            ans.push_back(1);
        }

        return ans;
    }
};
