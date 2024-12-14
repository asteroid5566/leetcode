class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int i, j, l1 = nums1.size(), l2 = nums2.size(), cnt = 0;

        for (i = 0; i < l1; i++) {
            for (j = 0; j < l2; j++) {
                if (nums1[i] % (nums2[j] * k) == 0)
                    cnt++;
            }
        }
        return cnt;
    }
};