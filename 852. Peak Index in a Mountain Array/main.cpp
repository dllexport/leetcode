#include <vector>

using namespace std;

int max_num = -1;
int max_index = -1;

void findMax(vector<int>& A)
{
    int length = A.size();
    for (int i = 0; i < length; ++i)
    {
        if (A[i] > max_num)
        {
            max_num = A[i];
            max_index = i;
        }
    }
}

bool chcekLeft(vector<int>& A, int mid)
{
    for (int i = 0; i < mid; ++i)
    {
        if (A[i] > A[i + 1])
            return false;
    }
    return true;
}

bool checkRight(vector<int>& A, int mid)
{
    int length = A.size();
    for (int i = mid; i < length; ++i)
    {
        if (A[i] < A[i + 1])
            return false;
    }
    return true;
}



int peakIndexInMountainArray(vector<int>& A) {

    findMax(A);

    if (checkRight(A, max_index) && chcekLeft(A, max_index))
        return max_index;

    return 0;

}


int main()
{
    vector<int> A = {0, 1, 0};

    auto res = peakIndexInMountainArray(A);

    getchar();
}