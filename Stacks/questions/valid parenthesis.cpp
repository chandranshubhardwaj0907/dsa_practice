
class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack; 
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else {
                if (!stack.empty()) {
                    char topch = stack.top();
                    if ((ch == ')' && topch == '(') ||
                        (ch == '}' && topch == '{') ||
                        (ch == ']' && topch == '[')) {
                        stack.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        
        if(stack.empty()) { 
            return true;
        } else {
            return false;
        }
    }
};
