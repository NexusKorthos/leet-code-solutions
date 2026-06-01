class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> checklist = {};

        int max_substring_length = 0;
        int current_substring_length = 0;

        int pointer = 0;

        while (pointer < s.length()) {

            char current_char = s[pointer];

            if (checklist[current_char]) {

                //cout << "Repeated: " << current_char << " " << checklist[current_char] << endl;

                max_substring_length = max(max_substring_length, current_substring_length);
                current_substring_length = 0;

                pointer = checklist[current_char];
                checklist.clear();

                continue;

            }

            //cout << "Added: " << current_char << endl;

            current_substring_length++;
            checklist[current_char] = pointer + 1;

            pointer++;

        }

        max_substring_length = max(max_substring_length, current_substring_length);

        return max_substring_length;

    }
};