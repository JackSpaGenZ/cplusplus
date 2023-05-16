#include <iostream>
#include <string>
#include "header/problem_04.h"

using namespace std;

int main()
{
    int no[] = {3, 4, 5, 6};
    
    ListNode *Node = Node.createNode(no[0]);
    Node *p = l;
    for (int i = 1; i < 4; i++)
    {
        p = Node.addLast(p, no[i]);
    }

    cout << "Node origin : ";

    Node.printNode(l);
    
    l = Node.reverseList(l);
}
