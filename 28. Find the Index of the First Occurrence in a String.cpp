class Solution {
public:
    int strStr(string haystack, string needle) {
        int i, j, k;

        for (i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                for (j = 1; j < needle.size(); j++) {
                    if (haystack[i + j] != needle[j])
                        break;
                }
                if (j == needle.size())
                    return i;
            }
        }
        return -1;
    }
};
