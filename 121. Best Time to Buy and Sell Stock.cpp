class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = prices[0], max = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < b)
                b = prices[i];
            if (prices[i] - b > max)
                max = prices[i] - b;
        }
        return max;
    }
};
