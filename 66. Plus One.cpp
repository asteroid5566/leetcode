class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1, i;
        for (i = digits.size() - 1; i >= 0; i--) {
            if (!carry)
                break;
            digits[i] += carry;
            carry = 0;
            if (digits[i] >= 10) {
                carry = digits[i] / 10;
                digits[i] %= 10; 
            }
        }
        if (carry)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};
