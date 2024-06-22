class Solution {
public:
    int climbStairs(int n) {
        int i, a = 1, b = 1, temp;
        if (n == 1)
            return 1;
        
        for (i = 2; i <= n; i++) {
            temp = b;
            b = a + b;
            a = temp;
        }
        return b;
    }
};
