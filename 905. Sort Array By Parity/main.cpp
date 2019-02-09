#include <vector>
using namespace std;


vector<int> sortArrayByParity(vector<int>& A) {


    size_t size = A.size();

    vector<int> even;
    vector<int> odd;

    for (size_t i = 0; i < size; ++i) {

        if (A[i] % 2 == 0)
            even.push_back(A[i]);
        else
            odd.push_back(A[i]);
    }

    for (auto i : odd)
    {
        even.push_back(i);
    }

    return even;
}

vector<int> sortArrayByParity2(vector<int>& A) {

    size_t size = A.size();

    int pos = 0;
    while (pos < size)
    {

        if(A[pos] % 2 == 0)
        {
            ++pos;
            continue;
        }

        int pre = A[pos];

        for (int i = pos + 1; i < size; ++i)
        {
            if (A[i] % 2 == 0)
            {
                int tmp = A[i];
                A[i] = A[pos];
                A[pos] = tmp;
                break;
            }
        }

        if (pre == A[pos]) return A;

        ++pos;
    }


}

int main()
{

    vector<int> arr = {3,1,2,4};
    auto res = sortArrayByParity2(arr);

}
