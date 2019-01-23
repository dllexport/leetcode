#include <string>
#include <stack>
#include <functional>
#include <unordered_set>
using namespace std;

bool isIsomorphic(string s, string t) {

    int s_arr[256] = {0};
    int t_arr[256] = {0};


    s_arr[s[0]] = -1;
    t_arr[t[0]] = -1;

    auto n = s.size();

    for (int i = 1; i < n; i++)
    {
        if (s_arr[s[i]] != t_arr[t[i]]) return false;
        s_arr[s[i]] = i;
        t_arr[t[i]] = i;
    }

    return true;

}

int main()
{
    auto res = isIsomorphic("ab", "aa");

    int i = 0;
}

