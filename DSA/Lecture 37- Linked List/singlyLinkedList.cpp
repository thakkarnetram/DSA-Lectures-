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

void InsertAtTail(Node *&tail, int data) // &tail to send the original tail & not making a copy of it
{
    // new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
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
    Node *tail = node;
    // print
    IterationNode(head);
    // insert node at head
    // InsertAtHead(head, 364);
    // InsertAtHead(head, 64);
    // InsertAtHead(head, 654);
    InsertAtTail(tail, 364);
    InsertAtTail(tail, 64);
    InsertAtTail(tail, 654);
    // print
    IterationNode(head);
    return 0;
}