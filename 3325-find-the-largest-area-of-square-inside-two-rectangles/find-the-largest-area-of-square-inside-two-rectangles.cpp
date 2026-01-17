class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {

        long long max_side = 0;

        for (int a = 0; a < bottomLeft.size(); a++) {

            vector<int>& a_bl_cords = bottomLeft[a];
            vector<int>& a_tr_cords = topRight[a];

            for (int b = 0; b < bottomLeft.size(); b++) {

                if (a == b)
                    continue;

                vector<int>& b_bl_cords = bottomLeft[b];
                vector<int>& b_tr_cords = topRight[b];

                if (    b_bl_cords[0] < a_tr_cords[0] && b_bl_cords[1] < a_tr_cords[1] 
                &&      a_bl_cords[0] < b_tr_cords[0] && a_bl_cords[1] < b_tr_cords[1]) {

                    int bl_x = max(a_bl_cords[0], b_bl_cords[0]);
                    int bl_y = max(a_bl_cords[1], b_bl_cords[1]);

                    int tr_x = min(a_tr_cords[0], b_tr_cords[0]);
                    int tr_y = min(a_tr_cords[1], b_tr_cords[1]);

                    max_side = max(max_side, (long long)min(tr_x - bl_x, tr_y - bl_y));

                }

            }

        }


        return max_side * max_side;
        
    }
};