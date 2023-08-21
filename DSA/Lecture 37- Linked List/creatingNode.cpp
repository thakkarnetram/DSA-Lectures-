#include <iostream>
using namespace std;

class Node
{
public:
    int x;
    // int y;
    Node *next;

    // constructor
    // Node(int data1, int data2)
    Node(int data1)
    {
        this->x = data1;
        // this->y = data2;
        this->next = NULL;
    }
};

int main()
{
    // Node *node1 = new Node(1344, 656);
    Node *node1 = new Node(1344);
    cout << "value of node 1 is => " << node1->x << endl;
    // cout << "value of node 1 is => " << node1->y << endl;
    cout << "address of node 1 is => " << node1->next << endl;
    return 0;
}