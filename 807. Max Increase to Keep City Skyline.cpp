class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int len = grid.size(), hori[len], para[len], maxH, maxP, sum = 0, i, j;
        
        for (i = 0; i < len; i++) {
            maxH = maxP = 0;
            for (j = 0; j < len; j++) {
                if (grid[i][j] > maxP)
                    maxP = grid[i][j];
                if (grid[j][i] > maxH)
                    maxH = grid[j][i];
            }
            hori[i] = maxH;
            para[i] = maxP;
        }

        for (i = 0; i < len; i++) {
            for (j = 0; j < len; j++) {
                sum += min(para[i], hori[j]) - grid[i][j];
            }
        }
        return sum;
    }
};
