#include <iostream>
using namespace std;

class Node
{
public:
    int x;
    Node *next;

    Node(int data)
    {
        this->x = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int data) // &head to send the original head & not making a copy of it
{
    // creating a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void IterationNode(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->x << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(34);
    Node *head = node;
    // print
    IterationNode(head);
    // insert node
    InsertAtHead(head, 364);
    InsertAtHead(head, 64);
    InsertAtHead(head, 654);
    // print
    IterationNode(head);
    return 0;
}