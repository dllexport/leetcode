#include <vector>
#include <string>
#include <set>
using namespace std;

const vector<string> alp2morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

int uniqueMorseRepresentations(vector<string>& words) {

    set<string> unique_set;

    for(auto &i : words)
    {
        string tmp = "";
        for (auto& j : i)
        {
            tmp += alp2morse[j - 97];
        }
        unique_set.insert(std::move(tmp));
    }

    return unique_set.size();
}
int main()
{
    vector<string> input = {"gin", "zen", "gig", "msg"};
    auto res = uniqueMorseRepresentations(input);
    return res;

}