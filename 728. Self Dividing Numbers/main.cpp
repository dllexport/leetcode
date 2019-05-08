#include <vector>
#include <string>
using namespace std;

vector<int> divideArray(int number)
{
    vector<int> res;
    auto str = to_string(number);
    for (auto i : str)
    {
        res.push_back(i - 48);
    }
    return res;
}

vector<int> selfDividingNumbers(int left, int right) {

    vector<int> res;

    for (int i = left; i <= right; ++i)
    {
        auto arr = divideArray(i);
        bool pass = true;
        for (int j : arr)
        {
            if (j == 0 || i % j != 0)
            {
                pass = false;
                break;
            }
        }

        if (pass)
            res.push_back(i);
    }

    return res;
}

int main()
{
    auto res = selfDividingNumbers(1, 22);
    getchar();
}