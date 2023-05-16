#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode *createNode(int n)
    {
        ListNode *temp = new ListNode;
        temp->val = n;
        temp->next = NULL;
        return temp;
    }

    ListNode *addLast(ListNode *l, int n)
    {
        ListNode *temp = new ListNode;
        temp->val = n;
        temp->next = NULL;
        l->next = temp;
        return temp;
    }

    void printNode(ListNode *l)
    {
        ListNode *p = l;
        cout << "[ ";
        for (; p; p = p->next)
        {
            cout << p->val;
            if (p->next)
            {
                cout << ", ";
            }
        }
        cout << " ]"
             << "\n";
    }

    ListNode *reverseList(ListNode *head)
    {
        return head;
    }
};