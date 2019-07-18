#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<string> res;

        for (auto &word : words)
        {
            bool notpassFlag = false;
            if (l1.find(word[0]) != l1.end())
            {
                for (auto &c : word)
                {
                    if (l1.find(c) == l1.end())
                    {
                        notpassFlag = true;
                        break;
                    }
                }
            }
            else if (l2.find(word[0]) != l2.end())
            {
                for (auto &c : word)
                {
                    if (l2.find(c) == l2.end())
                    {
                        notpassFlag = true;
                        break;
                    }
                }
            }
            else if (l3.find(word[0]) != l3.end())
            {
                for (auto &c : word)
                {
                    if (l3.find(c) == l3.end())
                    {
                        notpassFlag = true;
                        break;
                    }
                }
            }

            if (!notpassFlag)
            {
                res.push_back(word);
            }
        }

        return res;
    }

private:
    unordered_set<char> l1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
    unordered_set<char> l2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
    unordered_set<char> l3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
};

int main()
{
}