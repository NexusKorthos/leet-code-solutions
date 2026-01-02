class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int length1 = nums1.size(), length2 = nums2.size();

        if (length1 > length2)
            return findMedianSortedArrays(nums2, nums1); //Fixes edge cases while lowering the time complexity

        int left = 0, right = length1;

        while (left <= right) { //The left margin moving ahead of the right margin is a guaranteed fail

            int split_1 = (left + right) / 2;
            int split_2 = (length1 + length2 + 1) / 2 - split_1; 
            //One is added so the result is the same for odd and even lengths

            int max_1_left = (split_1 == 0) ? INT_MIN : nums1[split_1 - 1];
            int min_1_right = (split_1 == length1) ? INT_MAX : nums1[split_1];

            int max_2_left = (split_2 == 0) ? INT_MIN : nums2[split_2 - 1];
            int min_2_right = (split_2 == length2) ? INT_MAX : nums2[split_2];

            if (max_1_left <= min_2_right && max_2_left <= min_1_right) {
                if ((length1 + length2) % 2 == 0) {
                    return (double) (max(max_1_left, max_2_left) + min(min_1_right, min_2_right)) / 2;
                } else {
                    return (double) max(max_1_left, max_2_left);
                }
                break;
            }

            if (max_1_left > min_2_right)
                right = split_1 - 1;
            else
                left = split_1 + 1;

        }

        return 0.0;
        
    }
};