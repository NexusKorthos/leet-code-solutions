class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;

        int x_initial = x;
        long x_reversed = 0;

        while (x > 0) {

            x_reversed = x_reversed * 10 + x % 10;

            x = x / 10;

        }

        return x_initial == x_reversed;
        
    }
};