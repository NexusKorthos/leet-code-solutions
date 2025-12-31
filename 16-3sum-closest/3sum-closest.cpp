class Solution {
public:

    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int closest = NULL;

        for (int i = 0; i < nums.size(); i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {

                int result = nums[i] + nums[j] + nums[k];

                if (!closest) {
                    closest = result;
                } else {

                    int closestDifference = abs(target - closest);
                    int currentDifference = abs(target - result);

                    if (currentDifference < closestDifference)
                        closest = result;

                }

                if (result > target) {
                    k--;
                } else if (result < target) {
                    j++;
                } else {
                    return target;
                }

            }
        }

        return closest;

    }

};