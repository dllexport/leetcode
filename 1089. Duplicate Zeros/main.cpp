#include <vector>
using namespace std;

class Solution
{
    class Linklist
    {
    public:
        Linklist(int i) : val(i)
        {
        }
        int val;
        Linklist *next = nullptr;
    };

public:
    Solution()
    {
        head = new Linklist(-1);
        p = head;
    }
    void duplicateZeros(vector<int> &arr)
    {
        for (auto e : arr)
        {
            auto node = new Linklist(e);
            p->next = node;
            p = p->next;

            if (e == 0)
            {
                auto node = new Linklist(e);
                p->next = node;
                p = p->next;
            }
        }
        head = head->next;
        while (head != nullptr)
        {
            if (vv.size() != arr.size())
            {
                vv.push_back(head->val);
            }
            else
            {
                break;
            }
            head = head->next;
        }
        arr.swap(vv);
    }

private:
    Linklist *head;
    Linklist *p;
    std::vector<int> vv;
};