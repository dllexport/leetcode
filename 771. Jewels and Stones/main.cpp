#include <string>

using namespace std;


int numJewelsInStones(string J, string S)
{
    int count = 0;
    int Ssize = S.size();
    for (auto i : J)
    {
        for (int j = 0; j < Ssize; ++j) {
            if (i == S[j])
                ++count;
        }
    }
    return count;
}

int main()
{
    auto res = numJewelsInStones("aA", "aAAbbbb");
}