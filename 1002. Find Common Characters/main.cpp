#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {

        vector<string> result;

        auto short_str = shortest(A);

        for (int j = 0; j < short_str.size(); j++)
        {
            bool del_flag = true;

            for(int i = 0; i < A.size(); i++)
            {
                auto character = short_str[j];
                auto res = A[i].find(character);
                if (res == string::npos){
                    del_flag = false;
                    break;
                }else{
                    A[i][res] = '#';
                }
            }

            if (del_flag){
                result.push_back(string(1, short_str[j]));
            }
        }

        return result;
    }

    string& shortest(vector<string>& A){
        int size = 999999;
        string* min_str;
        for (auto &i : A)
        {
            if (i.size() < size) {
                min_str = &i;
                size = i.size();
            }
        }
        return *min_str;
    }

};

int main()
{
    vector<string> test {"bella","label","roller"};
    Solution so;
    so.commonChars(test);
}