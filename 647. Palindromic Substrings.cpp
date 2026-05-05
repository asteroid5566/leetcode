class Solution {
public:
    int countSubstrings(string s) {
        int i, x, y, len = s.size(), cnt = 0;

        for (i = 0; i < len; i++) {
            x = y = i;
            while (x >= 0 && y < len && s[x] == s[y]) {
                cnt++;
                x--;
                y++;
            }

            x = i;
            y = i + 1;
            
            while (x >= 0 && y < len && s[x] == s[y]) {
                cnt++;
                x--;
                y++;
            } 
        }
        return cnt;
    }
};
