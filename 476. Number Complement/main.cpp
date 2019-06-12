#include <bitset>

int findComplement(int num) {
    auto bit = std::bitset<32>(num);
    int pos = 0;
    for(int j = 31; j >= 0; j--) {
        if (bit[j] == 1)
        {
            pos = j;
            break;
        }
    }
    for (size_t i = 0; i <= pos; i++) {
        bit.set(i, bit[i] == 0 ? 1 : 0);
    }
    return bit.to_ulong();
}

int main() {
    findComplement(5);
}