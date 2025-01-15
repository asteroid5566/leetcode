class Solution {
public:
    int balancedStringSplit(string s) {
        int i, cnt = 0, l = 0;

        for (i = 0; i < s.size(); i++) {
            if (s[i] == 'L')
                l++;
            else
                l--;

            if (l == 0)
                cnt++;
        }
        return cnt;
    }
};
