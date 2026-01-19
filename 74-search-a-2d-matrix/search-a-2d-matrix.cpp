class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size(), m = matrix[0].size();
        int length = n * m;

        int left = 0, mid = length/2, right = length - 1;

        while (left <= right) {

            //cout << left << " " << mid << " " << right << endl;

            int row = mid / m;
            int pos = mid % m;

            int mid_value = matrix[row][pos];

            if (mid_value == target)
                return true;

            if (mid_value < target)
                left = mid + 1;
            else
                right = mid - 1;

            mid = left + (right - left)/2;

        }

        return false;
        
    }
};