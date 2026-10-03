class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // 1. Ignore leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Determine the sign
        int sign = 1;

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // 3. Convert digits manually
        long long num = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {

            // Convert character to integer
            int digit = s[i] - '0';

            num = num * 10 + digit;

            // 4. Check for overflow
            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        // Apply the sign
        num = num * sign;

        return (int)num;
    }
};