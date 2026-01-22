class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> ans(nums.size(), -1);

        for (int i = 0; i < nums.size(); i++) {

            int current_num = nums[i];

            int n = 1;

            int current_ans = -1;
            
            while (n <= current_num + 1) {

                int m = current_num - n;
                if ((m | m + 1) == current_num) {
                    current_ans = m;
                }

                n *= 2;

            }

            ans[i] = current_ans;

        }
        
        return ans;

    }
};