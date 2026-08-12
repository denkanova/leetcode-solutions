class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> dict = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        int prev = 0;

        for (char c : s) {
            int number = dict[c];

            if (number > prev) {
                result -= prev * 2;
            }

            result += number;
            prev = number;
        }

        return result;
    }
};