class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> triplets;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {

                int result = nums[i] + nums[j] + nums[k];
                if (result > 0) {
                    k--;
                } else if (result < 0) {
                    j++;
                } else {
                    triplets.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (nums[j] == nums[j - 1] && j < k) {
                        j++;
                    }
                }

            }
        }

        return triplets;
        
    }
};