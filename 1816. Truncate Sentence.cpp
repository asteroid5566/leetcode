class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt = 0;
        string ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (++cnt == k)
                    break;
            }
            ans += s[i];
        }
        return ans;
    }
};
