#include <stack>

class Solution {
public:
    bool isValid(string s) {
        
        stack<int> mystack;
        int size = s.size();
        if (size == 1) return 0;
        
        int i = 0;
        while (i!=size)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                mystack.push(s[i]);
            }
            else
            {
                if (mystack.empty()) return 0;
                else if (s[i] == ')' && mystack.top() == '(') mystack.pop();
                else if (s[i] == ']' && mystack.top() == '[') mystack.pop();
                else if (s[i] == '}' && mystack.top() == '{') mystack.pop();
                else return 0;
            }
            i++;
        }
        
        if (!mystack.empty()) return 0;
        
        return 1;
        
    }
};
