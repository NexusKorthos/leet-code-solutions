class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1) {
            return s;
        }

        vector<string> grid(numRows, "");

        bool going_down = true;
        int letter = 0, row = 0;

        while (letter < s.length()) {

            //cout << row << " " << grid[row] << " " << s.at(letter) << endl;

            grid[row] += s.at(letter);

            going_down = (row == 0) ? true : (row == numRows - 1) ? false : going_down;

            if (going_down) {
                row++;
            } else {
                row--;
            }

            letter++;

        }

        string result = "";

        for (int i = 0; i < numRows; i++) {
            result += grid[i];
        }

        return result;
        
    }
};