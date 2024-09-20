class Solution {
public:
    int xorOperation(int n, int start) {
        int num = start, i;

        for (i = 1; i < n; i++)
            num ^= (start + 2 * i);

        return num;
    }
};
