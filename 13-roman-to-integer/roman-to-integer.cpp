unordered_map<char, int> values = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
};

unordered_map<char, char> reducers = {
    {'V', 'I'},
    {'X', 'I'},
    {'L', 'X'},
    {'C', 'X'},
    {'D', 'C'},
    {'M', 'C'}
};

class Solution {
public:
    int romanToInt(string s) {

        int pointer = s.length() - 1;
        char nextLetter = NULL;

        int result = 0;

        while (pointer >= 0) {

            char letter = s.at(pointer);
            int letterValue = values[letter];

            if (nextLetter && reducers[nextLetter] == letter) {
                result -= letterValue;
            } else {
                result += letterValue;
            }

            nextLetter = letter;
            
            pointer--;

        }

        return  result;
        
    }
};