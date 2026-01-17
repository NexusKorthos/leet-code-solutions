class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {

        int rectangles = bottomLeft.size();
        long long max_side = 0;

        for (int a = 0; a < rectangles; a++) {

            vector<int>& a_bl_cords = bottomLeft[a];
            vector<int>& a_tr_cords = topRight[a];

            for (int b = a + 1; b < rectangles; b++) {

                vector<int>& b_bl_cords = bottomLeft[b];
                vector<int>& b_tr_cords = topRight[b];

                int bl_x = max(a_bl_cords[0], b_bl_cords[0]);
                int bl_y = max(a_bl_cords[1], b_bl_cords[1]);

                int tr_x = min(a_tr_cords[0], b_tr_cords[0]);
                int tr_y = min(a_tr_cords[1], b_tr_cords[1]);

                max_side = max(max_side, (long long)min(tr_x - bl_x, tr_y - bl_y));

            }

        }

        return max_side * max_side;
        
    }
};