#include <unistd.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr)
            return head;
        int listLen = getLen(head);
        return getNodeAt(head, listLen / 2 + 1);
    }

    int getLen(ListNode* head) {
        int i = 0;
        auto p = head;
        while(p != nullptr) {
            ++i;
            p = p->next;
        }
        return i;
    }


    ListNode* getNodeAt(ListNode* head, int index) {
        int i = 0;
        auto p = head;
        while (p != 0) {
            p = p->next;
            ++i;
            if (i + 1 ==  index) {
                return p;
            }
        }
        return nullptr;
    }

};
