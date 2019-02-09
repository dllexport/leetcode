#include <string>
using namespace std;

bool judgeCircle(string moves) {

    int L,R,U,D = 0;

    for (auto i : moves)
    {
        switch (i)
        {
            case 'L':
            {
                ++L;
                break;
            }
            case 'R':
            {
                ++R;
                break;
            }
            case 'U':
            {
                ++U;
                break;
            }
            case 'D':
            {
                ++D;
                break;
            }
        }
    }

    auto res = (L == R) && (U == D);
    return res;
}

int main()
{
    auto res = judgeCircle("UD");
    return 0;
}