#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int n)
{
    Node *temp = new Node;
    temp->data = n;
    temp->next = NULL;
    return temp;
}

Node *addLast(Node *l, int n)
{
    Node *temp = new Node;
    temp->data = n;
    temp->next = NULL;
    l->next = temp;
    return temp;
}

Node *addHead(Node *l, int n)
{
    Node *temp = createNode(n);
    temp->next = l;
    return temp;
}

Node *addMidle(Node *l, int locateX, int n)
{
    Node *p = l;
    for (int i = 1; i < locateX - 1; i++)
    {
        p = p->next;
    }
    Node *temp = new Node;
    temp->data = n;
    temp->next = p->next;
    p->next = temp;

    return l;
}

Node *removeHead(Node *l)
{
    Node *p = l;
    p = p->next;
    return p;
}

Node *removeTail(Node *l)
{
    Node *p = l;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    delete (p->next);
    p->next = NULL;
    return l;
}

Node *removeAt(Node *l, int locateX)
{
    Node *p = l;
    for (int i = 1; i < locateX - 1; i++)
    {
        p = p->next;
    }
    Node *temp = p;
    temp = temp->next;
    p->next = temp->next;
    return l;
}

void printNode(Node *l)
{
    Node *p = l;
    cout << "[ ";
    for (; p; p = p->next)
    {
        cout << p->data;
        if (p->next)
        {
            cout << ", ";
        }
    }
    cout << " ]"
         << "\n";
}

int main()
{
    int no[] = {3, 4, 5, 6};
    Node *l = createNode(no[0]);
    Node *p = l;
    for (int i = 1; i < 4; i++)
    {
        p = addLast(p, no[i]);
    }

    cout << "Node origin : ";

    printNode(l);
    // Add head
    int head = 10;
    l = addHead(l, head);

    cout << "Node after addhead 10 : ";

    printNode(l);
    // Add Midle
    int loct = 2;
    int midle = 20;
    l = addMidle(l, loct, midle);

    cout << "Node after add 20 at 2 : ";
    printNode(l);
    // Remove Head
    l = removeHead(l);
    cout << "Node after removeHead : ";
    printNode(l);

    // Remove Tail
    l = removeTail(l);
    cout << "Node after removeTail : ";
    printNode(l);

    // Remove At
    l = removeAt(l, loct);
    cout << "Node after removeAt 2 : ";
    printNode(l);
}