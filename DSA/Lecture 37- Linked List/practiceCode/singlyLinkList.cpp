#include <iostream>
using namespace std;

class Node
{
public:
    int number;
    Node *next;

    // constructor
    Node(int x)
    {
        this->number = x;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->number;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(5);
    Node *head = node;
    print(head);
    cout << node->number << endl;
    return 0;
}