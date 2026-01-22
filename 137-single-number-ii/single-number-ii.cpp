class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int first = 0;
        int second = 0;

        for (int n : nums) {

            /* The first time the number appears, the bit is checked
             * The second time it is removed
             * The third time it is in the second variables
             */

            first = first ^ (n & ~second);

            /* Numbers go here if the bit is not set in the first variable
             * 
             */

            second = second ^ (n & ~first);

        }

        return first;
        
    }
};