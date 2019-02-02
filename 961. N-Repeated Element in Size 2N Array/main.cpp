#include <vector>
#include <unordered_set>

using namespace std;

int repeatedNTimes(vector<int>& A) {

    unordered_set<int> unique_set;

    for(auto &i : A)
    {
        auto res = unique_set.insert(i);
        if (!res.second) return *res.first;
    }

    return 0;
}

int main()
{
    vector<int> arr = {1,2,3,3};
    auto res = repeatedNTimes(arr);
    return res;
}