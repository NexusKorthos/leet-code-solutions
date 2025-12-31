class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            int solutionNumber = target - nums[i];

            if (hash.find(solutionNumber) != hash.end())
                return {hash[solutionNumber], i};

            hash[nums[i]] = i;
        }

        return {};

    }
};