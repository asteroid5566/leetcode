class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        int i, j;
        
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                a.push(s[i]);
            else if (s[i] == ')') {
                if (a.empty() || a.top() != '(')
                    return false;
                else
                    a.pop();
            }
            else if (s[i] == ']') {
                if (a.empty() || a.top() != '[')
                    return false;
                else
                    a.pop();
            }
            else if (s[i] == '}') {
                if (a.empty() || a.top() != '{')
                    return false;
                else
                    a.pop();
            }
        }
        return a.empty();
    }
};
