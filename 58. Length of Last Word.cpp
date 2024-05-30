class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, count = 0, flag = 0;
        string ans;

        for (i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (flag)
                    break;
            }
            else {
                flag = 1;
                count++;
                ans += s[i];
            }
        }
        return count;
    }
};
