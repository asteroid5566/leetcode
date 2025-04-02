class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0, i, len = s.size();
        for (i = 0; i < len; i++) {
            sum += ('z' - s[i] + 1) * (i + 1);
        }
        return sum;
    }
};
