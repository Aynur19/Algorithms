#include "dataStructures.h"


#pragma region ListNode
ListNode::ListNode() : val(0), next(nullptr) { }

ListNode::ListNode(int x) : val(x), next(nullptr) { }

ListNode::ListNode(int x, ListNode * next) : val(x), next(next) { }

void ListNode::toString(const char * start, const char * sep, const char * end)
{
    ListNode * ln = this;

    cout << start << ln->val;
    while(ln->next != nullptr)
    {
        cout << sep << ln->next->val;
        ln = ln->next;
    }
    cout << end << endl;
}
#pragma endregion
