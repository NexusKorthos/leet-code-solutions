class Solution {
public:

    void printList(vector<int>& nums) {
        for (int n : nums) {
                cout << n << " ";
            }
        cout << endl;
    }

    int minimumPairRemoval(vector<int>& nums) {

        if (nums.size() < 2) {
            return 0;
        }

        vector<int> dummy;
        int operations = 0;

        while (!is_sorted(nums.begin(), nums.end())) {

            int min_sum = nums[0] + nums[1];
            int min_pos = 0;

            //cout << "==============" << endl;
            //printList(nums);

            for (int i = 1; i < nums.size() - 1; i++) {

                //cout << nums[i] << " + " << nums[i+1] << " = ";

                int current_sum = nums[i] + nums[i+1];

                //cout << current_sum << endl;

                if (current_sum < min_sum) {
                    min_sum = current_sum;
                    min_pos = i;
                }

            }

            nums.erase(nums.begin() + min_pos + 1);
            nums[min_pos] = min_sum;

            //printList(nums);

            operations++;

        }

        return operations;
        
    }
};