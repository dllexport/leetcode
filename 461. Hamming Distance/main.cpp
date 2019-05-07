#include <bitset>
#include <string>

int hammingDistance(int x, int y) {

    auto xb = std::bitset<32>(x);
    auto yb = std::bitset<32>(y);

    std::bitset<32> res = (xb ^= yb);

    int count = 0;
    for (int i = 0; i < 32; ++i)
    {
        if (res[i])
            ++count;
    }
    return count;
}

int main()
{

    auto res = hammingDistance(1, 4);

}