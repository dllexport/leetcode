#include <vector>
#include <functional>
using namespace std;

vector<int> sortedSquares(vector<int>& A) {

    for (int i = 0; i < A.size(); ++i)
    {
        A[i] *= A[i];
    }
    std::sort(A.begin(), A.end(), std::less<int>());

    return A;

}


int main()
{
    vector<int> int_arr = {-4,-1,0,3,10};
    sortedSquares(int_arr);

}