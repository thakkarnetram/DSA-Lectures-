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

void InsertAtMid(Node *&tail, Node *&head, int position, int data)
{
    // edge case if position is 1
    // basically if user wants to insert at One . we can directly call the head func
    // tht will add it to the start of the Node
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }
    // temp node
    Node *temp = head;
    // count
    int count = 1; // 1 cause im sitting at the first node
    // iteration till n-1
    while (count < position - 1)
    {
        temp = temp->next;
        count += 1;
    }
    // edge case if position is last
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }
    // node for data
    Node *nodeToInsert = new Node(data);
    // changing the pointing
    nodeToInsert->next = temp->next;
    // changing the temp addr to point towards nodeToInsert
    temp->next = nodeToInsert;
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
    // insert node at tail
    InsertAtTail(tail, 364);
    InsertAtTail(tail, 64);
    InsertAtTail(tail, 654);
    // insert node at middle
    InsertAtMid(tail, head, 7, 22);
    // print
    IterationNode(head);
    // check the head & tail
    cout << "HEAD : " << head->x << endl;
    cout << "TAIL : " << tail->x << endl;
    return 0;
}