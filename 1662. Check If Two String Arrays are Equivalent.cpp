class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i1 = 0, i2 = 0, j1 = 0, j2 = 0, s1 = word1.size(), s2 = word2.size();

        while (1) {
            if (j1 >= word1[i1].size()) {
                j1 = 0;
                i1++;
            }
            if (j2 >= word2[i2].size()) {
                j2 = 0;
                i2++;
            }
            
            if (i1 >= s1 && i2 >= s2)
                return true;
            if (i1 >= s1 && i2 < s2 || i1 < s1 && i2 >= s2)
                return false;
            
            if (word1[i1][j1] != word2[i2][j2])
                return false;
            
            j1++;
            j2++;
        }
    }
};
