class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0, i;

        for (i = 0; i < s.size() - 1; i++)
            sum += abs(s[i] - s[i + 1]);
        return sum;
    }
};
