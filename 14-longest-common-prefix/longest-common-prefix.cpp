class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.size() == 0) {
            return "";
        }

        string prefix = strs[0];
        int length = prefix.length();

        for (int i = 1; i < strs.size(); i++) {

            string current_string = strs[i];

            while (getSubStr(current_string, length) != prefix && length >= 0) {
                cout << getSubStr(current_string, length) << " " << prefix << endl;
                length = length - 1;
                prefix = getSubStr(prefix, length);
            }

            cout << getSubStr(current_string, length) << " " << prefix << endl;

        }

        return prefix;
        
    }
private:
    string getSubStr(string s, int length) {
        return s.substr(0, max(length, 0));
    }
};