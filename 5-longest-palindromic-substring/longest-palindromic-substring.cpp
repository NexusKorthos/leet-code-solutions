class Solution {
public:

    string longestPalindrome(string s) {

        if (s.empty())
            return "";

        string result = "";

        for (int m = 0; m < s.length(); m++) {

            string odd_substr = getSubString(s, m, m);
            string even_substr = getSubString(s, m, m + 1);

            if (result.length() < odd_substr.length())
                result = odd_substr;

            if (result.length() < even_substr.length())
                result = even_substr;

        }

        return result;

    }

private:

    string getSubString(string s, int left, int right) {

        left = max(0, left);
        right = min(s.length() - 1, (unsigned long)right);

        string sub_string = "";

        while (left >= 0 && right < s.length() && s[left] == s[right]) {

            sub_string = s.substr(left, right - left + 1);

            //cout << left << " " << right << " " << sub_string << endl;
            
            left--;
            right++;
        }

        return sub_string;

    }

};