vector<int> nums = {1, 10, 100, 1000};

unordered_map<int, char> letters = {
    {1,'I'},
    {5,'V'},
    {10,'X'},
    {50,'L'},
    {100,'C'},
    {500,'D'},
    {1000,'M'},
};

class Solution {
public:
    string intToRoman(int num) {

        string result = "";

        for (int i = nums.size() - 1; i >= 0; i--) {

            int divider = nums[i];
            int left_over = num % divider;

            if (left_over == num)
                continue;

            int removed = num - left_over;
            int amount = removed / divider;

            if (i < nums.size() - 1) {

                if (amount == 9) {
                    result = result + letters[divider] + letters[divider * 10];
                    amount -= 9;
                } else if (amount == 4) {
                    result = result + letters[divider] + letters[divider * 5];
                    amount -= 4;
                } else if (amount >= 5) {
                    result += letters[divider * 5];
                    amount -= 5;
                }

            }

            for (int j = 0; j < amount; j++) {
                result = result + letters[nums[i]];
            }

            num -= removed;

        }

        return result;
        
    }
};