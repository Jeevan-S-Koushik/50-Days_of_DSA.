class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            Stack.push(c);
        } else {
            if (Stack.empty() ||
                (c == ')' && Stack.top() != '(') ||
                (c == ']' && Stack.top() != '[') ||
                (c == '}' && Stack.top() != '{')) {
                return false;
            }
            Stack.pop();
        }
    }

    return Stack.empty();
    }
};