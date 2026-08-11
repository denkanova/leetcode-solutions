class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x < 9) {
            return true;
        }

        if (x % 10 == 0) {
            return false;
        }

        int reversed = 0;

        while (x > reversed) {
            reversed = (reversed * 10) + (x % 10);

            if (reversed == x) {
                return true;
            }

            x /= 10;
        }

        return x == reversed;
    }
};