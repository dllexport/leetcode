#include <vector>
#include <string>

using namespace std;

vector<int> diStringMatch(string S) {

    auto size = S.size();

    vector<int> vec(size + 1, 0);

    int min = 0;
    int max = size;


    for (int j = 0; j < size; ++j)
    {
        switch (S[j])
        {
            case 'I':
            {
                vec[j] = min++;
                break;
            }
            case 'D':
            {
                vec[j] = max--;
                break;
            }
        }

    }
    vec.back() = max;
    return vec;

}

int main()
{
    auto i = diStringMatch("IDID");

    return 0;
}