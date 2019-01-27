#include <string>

using namespace std;

string toLowerCase(string str) {

    auto max = str.size();
    for (int i = 0; i < max; ++i)
    {
        if (str[i] >= 96 && str[i] <= 122)
            continue;
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }

    return str;

}


int main()
{
    auto res = toLowerCase("AFDSsfadsf");
}

