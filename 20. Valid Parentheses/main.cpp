#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] =='{' || s[i] =='[') {
                charStack.push(s[i]);
                continue;
            }else {
                if (charStack.empty())
                    return false;
                auto top = charStack.top();
                switch (top)
                {
                case '[':
                    if (s[i] == ']')
                        charStack.pop();
                    else 
                        return false;
                    break;
                case '(':
                    if (s[i] == ')')
                        charStack.pop();
                    else 
                        return false;
                    break;
                case '{':
                    if (s[i] == '}')
                        charStack.pop();
                    else 
                        return false;
                    break; 
                default:
                    return false;
                }
            }
        }
        if (charStack.size() > 0) {
            return false;
        }
        return true;
    }

private:
    stack<char> charStack;
};

int main() {
    Solution so;
    so.isValid("((()))");
}