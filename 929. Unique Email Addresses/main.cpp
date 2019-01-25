#include <vector>
#include <string>
#include <set>
using namespace std;


int numUniqueEmails(vector<string>& emails) {

    set<string> email_set;

    for (auto e : emails)
    {
        auto atloc = e.find('@');
        auto local = std::string(e, 0, atloc);
        string format_local;
        for(auto i : local)
        {
            if (i == '.')
            {
                continue;
            }
            if (i == '+') break;
            format_local += i;
        }

        email_set.insert((format_local + std::string(e, atloc)));
    }

    return email_set.size();
}

int main()
{
    std::vector<std::string> v = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" };

    auto res = numUniqueEmails(v);
}