class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s2 += (s[i] - 'A' + 'a');
            else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
                s2 += s[i];
        }

        int i = 0, j = s2.size() - 1;
        while (i < j) {
            if (s2[i] != s2[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
