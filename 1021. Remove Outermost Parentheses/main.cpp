#include <string>
#include <stack>

using namespace std;

stack<char> char_stack;
deque<string> str_queue;


string removeOuterParentheses(string S) {

    int last_begin = 0;

    int length = S.length();
    for (int i = 0; i < length; ++i)
    {
        if (S[i] == '(')
        {
            char_stack.push('(');
        }else
        {
            char_stack.pop();
            if (char_stack.size() == 0){
                auto substr = S.substr(last_begin + 1, i - last_begin - 1);

                str_queue.push_back(substr);
                last_begin = i + 1;
            }
        }
    }

    string res;
    while(!str_queue.empty())
    {
        auto i = str_queue.front();
        res += str_queue.front();
        str_queue.pop_front();
    }
    return res;
}

int main()
{
    string test_str = "(()())(())";

    removeOuterParentheses(test_str);
}