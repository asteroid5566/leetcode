class Solution {
public:
    int romanToInt(string s) {
        int i, j, sum = 0, arr[7] = {1000, 500, 100, 50, 10, 5, 1};
        char ro[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};

        for (i = 0; i < s.size(); i++) {
            int curr, next;
            for (j = 0; j < 7; j++) {
                if (s[i] == ro[j]) {
                    curr = j;
                    break;
                }
            }

            if (i == s.size() - 1)
                sum += arr[curr];
            else {
                for (j = 0; j < 7; j++) {
                    if (s[i + 1] == ro[j]) {
                        next = j;
                        break;
                    }
                }
                if (next < curr) {
                    sum = sum - arr[curr] + arr[next];
                    i++; 
                }
                else
                    sum += arr[curr];
            }
        }
        return sum;
    }
};
