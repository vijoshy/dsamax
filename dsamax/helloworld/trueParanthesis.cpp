#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            } else {
                if (!stk.empty() && stk.top() == '(' && s[i] == ')') {
                    stk.pop();
                } else if (!stk.empty() && stk.top() == '{' && s[i] == '}') {
                    stk.pop();
                } else if (!stk.empty() && stk.top() == '[' && s[i] == ']') {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
