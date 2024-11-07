class Solution {
public:
    int reverse(int x) {
        int max = 2147483647, min = -2147483648, n = 0, tmp;
        
        while (x != 0) {
            tmp = x % 10;
            x /= 10;
            if (n > max / 10 || n == max / 10 && tmp > 7)
                return 0;
            if (n < min / 10 || n == min / 10 && tmp < -8)
                return 0;
            n = n * 10 + tmp;
        }
        return n;
    }
};
