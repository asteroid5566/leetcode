class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        char curr = '#';
        int i, cnt = 0, len = s.size();
        
        for (i = 0; i < len; i++) {
            if (curr != s[i]) {
                curr = s[i];
                cnt = 1;
            }
            else
                cnt++;
            
            if (cnt == k) {
                if (i + 1 >= len)    
                    return true;
                else if (s[i + 1] != curr)
                    return true;
            }
        }
        return false;
    }
};
