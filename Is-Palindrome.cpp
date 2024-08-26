class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original = x;
        long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            x /= 10;

            if (reversed > 2147483647 / 10 || (reversed == 2147483647 / 10 && digit > 7)) {
                return false;
            }

            reversed = reversed * 10 + digit;
        }

        return reversed == original;
    }
};