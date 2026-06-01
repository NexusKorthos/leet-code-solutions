class Solution {
public:

    string longestPalindrome(string s) {

        if (s.empty())
            return "";

        int start = 0, length = 0;

        for (int m = 0; m < s.length(); m++) {

            int odd_length = getSubString(s, m, m);
            int even_length = getSubString(s, m, m + 1);

            int longer_length = max(odd_length, even_length);

            if (length < longer_length) {
                length = longer_length;
                start = max(0, m - (length-1)/2);
            }

        }

        return s.substr(start, length);

    }

private:

    int getSubString(string s, int left, int right) {

        left = max(0, left);
        right = min(s.length() - 1, (unsigned long)right);

        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }

        cout << right - left - 1 << endl;

        return right - left - 1;

    }

};