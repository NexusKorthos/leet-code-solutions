#include <algorithm>

class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxArea = 0;

        int left = 0;
        int right = height.size() - 1;

        while (left < right) {

            int smallerHeight = min(height[left], height[right]);
            int distance = right - left;

            maxArea = max(smallerHeight * distance, maxArea);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }

        }

        return maxArea;
    }
};