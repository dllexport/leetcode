#include <bitset>

class Solution
{
public:
    bool hasAlternatingBits(int n)
    {
        std::bitset<32> bit(n);
        int firstOne = 0;
        for (auto i = 32; i >= 0; i--)
        {
            if (bit[i] == true)
            {
                firstOne = i;
                break;
            }
        }

        for (; firstOne >= 1; firstOne--)
        {
            if (bit[firstOne] == bit[firstOne - 1])
            {
                return false;
            }
        }
        return true;
    }
};