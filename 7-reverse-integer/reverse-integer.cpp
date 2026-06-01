class Solution {
public:
    int reverse(int x) {

        int is_negative = x < 0;

        if (is_negative && x == -2147483648)
            return 0;
        else if (is_negative)
            x = -x;

        int x_reversed = 0;

        int int_max = 214748364;

        while (x > 0) {

            int digit = x % 10;
            x /= 10;

            if (is_negative && (x_reversed > int_max || x_reversed == int_max && digit > 8))
                return 0;
            else if (x_reversed > int_max || x_reversed == int_max && digit > 7)
                return 0;

            x_reversed = x_reversed * 10 + digit;

        }

        if (is_negative)
            x_reversed = -x_reversed;

        return x_reversed;
        
    }
};