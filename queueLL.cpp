#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
public:
    Node *front, *rear;
    queue()
    {
        front = NULL;
        rear = NULL;
    };

    void enqueue(int val)
    {
        Node *temp = new Node(val);
        if (front == NULL)
        {
            rear = temp;
            front = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete temp;
    }
};

int main()
{
    queue nq;

    nq.enqueue(15);
    nq.enqueue(10);
    nq.enqueue(1);

    cout << nq.front->data << endl;
    cout << nq.rear->data<<endl;
    nq.dequeue();
     cout << nq.front->data << endl;
    cout << nq.rear->data;
}
