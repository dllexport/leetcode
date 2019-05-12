#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        for (auto& v : A)
        {
            std::reverse(v.begin(), v.end());
        }

        for (auto& v : A)
        {
            for (auto& vv : v)
            {
                if (vv == 0)
                    vv = 1;
                else
                    vv = 0;
            }
        }

        return A;

    }
};

int main() {


}