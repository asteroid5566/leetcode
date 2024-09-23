class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int i, len = height.size();
        vector<int> v;
        
        for (i = 1; i < len; i++) {
            if (height[i - 1] > threshold)
                v.push_back(i);
        }
        return v;
    }
};
