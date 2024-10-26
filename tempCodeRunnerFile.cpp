class Solution {
public:
    int myAtoi(string s) {
        if (s.length() == 0) {
            return 0;
        }
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        s = s.substr(i);

        int sign = +1;
        long ans = 0;
        if (s[0] == '-') {
            sign = -1;
        }

        if (s[0] == '+' || s[0] == '-') {
            i = 1;
        } else {
            i = 0;
        }
        int Max = INT_MAX;
        int Min = INT_MIN;

        while (i < s.length()) {
            if (s[0] == ' ' || !isdigit(s[i])) {
                break;
            }
            ans = ans * 10 + s[i] - '0';
            if (sign = -1 && -1 * ans < Min) {
                return Min;
            }
            if (sign = 1 && ans > Max) {
                return Max;
            }
            i++;
        }
        return (int)(sign * ans);
    }
};