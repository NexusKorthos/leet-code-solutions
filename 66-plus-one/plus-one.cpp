class Solution {
public:

    void updateNumber(vector<int>& digits, int pos) {

        if (pos < 0) {
            digits.insert(digits.begin(), 1);
            return;
        }

        int sum = digits[pos] + 1;

        if (sum < 10) {
            digits[pos] = sum;
            return;
        }

        digits[pos] = 0;

        updateNumber(digits, pos - 1);

    }

    vector<int> plusOne(vector<int>& digits) {

        updateNumber(digits, digits.size() - 1);

        return digits;
        
    }
};