class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        int max = -1, i, left = 0, right = x, mid;

        while (left <= right) {
            mid = (left + right) / 2;
            if ((long long)mid * mid == (long long)x) {
                max = mid;
                break;
            }
            else if ((long long)mid * mid < (long long)x) {
                left = mid + 1;
                if (mid > max)
                    max = mid;
            }
            else
                right = mid - 1;
        }
        return max;
    }
};
