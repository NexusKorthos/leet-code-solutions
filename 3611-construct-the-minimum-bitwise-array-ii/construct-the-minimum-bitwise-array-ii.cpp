class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);

        for (int i = 0; i < nums.size(); i++) {

            int n = 1;
            
            while (n <= nums[i] + 1) {

                int m = nums[i] - n;
                
                if ((m | m + 1) == nums[i]) {
                    ans[i] = m;
                }

                n *= 2;

            }

        }
        
        return ans;

    }
};