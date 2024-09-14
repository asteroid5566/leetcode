class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i, len = word.size(), flag = 0;
        string ans;
        
        for (i = 0; i < len; i++) {
            ans = word[i] + ans;
            if (word[i] == ch) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            for (++i; i < len; i++)
                ans += word[i];
            return ans;
        }
        return word;
    }
};
