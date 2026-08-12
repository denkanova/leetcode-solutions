class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1 || strs[0].length() == 0) {
            return strs[0];
        }

        int x = 0;
        int y = 0;
        string prefix = "";

        while (true) {
            if (y >= prefix.length() && y < strs[x].length()) {
                prefix += strs[x][y];
            }

            if (y >= strs[x].length() || strs[x][y] != prefix[y]) {
                if (y < prefix.length()) {
                    return prefix.substr(0, prefix.length() - 1);
                } else {
                    return prefix;
                }
            }

            x++;
            if (x >= strs.size()) {
                x = 0;
                y++;
            }
        }

        return prefix;
    }
};