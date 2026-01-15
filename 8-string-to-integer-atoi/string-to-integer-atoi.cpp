class Solution {
public:
    int myAtoi(string s) {

        int pointer = 0, length = s.length();
        int checks = 0;

        int result = 0;
        int sign = 1;
        int max = 214748364;

        bool start_check = false;

        while (pointer < length) {

            char c = s.at(pointer);

            if (!start_check && c == ' ') {
                pointer++;
                continue;
            }

            start_check = true;

            if (checks == 0 && (s.at(pointer) == '-' || s.at(pointer) == '+')) {
                sign = (s.at(pointer) == '-') ? -1 : 1;
            } else if (isdigit(c)) {

                int digit = c - '0';

                cout << sign << endl;

                if (sign == -1 && (result > max || result == max && digit >= 8)) {
                    cout << "MIN" << endl;
                    return INT_MIN;
                } else if (sign == 1 && (result > max || result == max && digit > 7)) {
                    cout << "MAX" << endl;
                    return INT_MAX;
                }

                result = result * 10 + digit;


            } else {
                break;
            }

            checks++;
            pointer++;

        }

        return result * sign;
        
    }
};