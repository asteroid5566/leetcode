class Solution {
public:
    string addBinary(string a, string b) {
        int i, j, sum = 0, carry = 0;
        string c = "";
        for (i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--) {
            sum = 0;
            if (i < 0) {
                if (b[j] == '1')
                    sum++;
                if (carry == 1)
                    sum++;

                if (sum == 2) {
                    carry = 1;
                    c = '0' + c;
                }
                else if (sum == 1) {
                    carry = 0;
                    c = '1' + c;
                }
                else {
                    carry = 0;
                    c = '0' + c;
                }
            }
            else if (j < 0) {
                if (a[i] == '1')
                    sum++;
                if (carry == 1)
                    sum++;

                if (sum == 2) {
                    carry = 1;
                    c = '0' + c;
                }
                else if (sum == 1) {
                    carry = 0;
                    c = '1' + c;
                }
                else {
                    carry = 0;
                    c = '0' + c;
                }
            }
            else {
                if (a[i] == '1')
                    sum++;
                if (b[j] == '1')
                    sum++;
                if (carry == 1)
                    sum++;

                if (sum == 3) {
                    carry = 1;
                    c = '1' + c;
                }
                else if (sum == 2) {
                    carry = 1;
                    c = '0' + c;
                }
                else if (sum == 1) {
                    carry = 0;
                    c = '1' + c;
                }
                else {
                    carry = 0;
                    c = '0' + c;
                }
            }
        }
        if (carry == 1)
            c = '1' + c;
        return c;
    }
};
