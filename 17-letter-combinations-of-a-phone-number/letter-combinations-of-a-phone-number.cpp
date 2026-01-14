unordered_map<char, vector<string>> buttons {
    {'1', vector<string>{""}},
    {'2', vector<string>{"a", "b", "c"}},
    {'3', vector<string>{"d", "e", "f"}},
    {'4', vector<string>{"g", "h", "i"}},
    {'5', vector<string>{"j", "k", "l"}},
    {'6', vector<string>{"m", "n", "o"}},
    {'7', vector<string>{"p", "q", "r", "s"}},
    {'8', vector<string>{"t", "u", "v"}},
    {'9', vector<string>{"w", "x", "y", "z"}}
};

class Solution {
public:
    vector<string> letterCombinations(string digits) {;

        vector<string> result = {};

        getCombination(digits, 0, "", result);

        return result;
        
    }

    void getCombination(string& digits, int index, string combination, vector<string>& result) {

        if (index == digits.length()) {
            result.push_back(combination);
            return;
        }

        for (string s : buttons[digits.at(index)]) {
            getCombination(digits, index + 1, combination + s, result);
        }

    }
};