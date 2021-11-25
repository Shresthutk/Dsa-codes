// queue implementation in array
// queue follows first in first out

//enqueue-push
//dequeue-pop
//peek-returns first element same as top in stack
//empty-same as stack,a bool expression which returns if a queue is empty or not

#include <iostream>
using namespace std;
#define n 100

class queue
{

    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "stack overflowed";
            return;
        }
        back++;
        arr[back] = x;
        if (front = -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
            if (front == -1 || front > back)
            {
                cout << "No elements in queue" << endl;
                return -1;
            }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    queue qu;
    qu.enqueue(5);
    qu.enqueue(2);
    qu.enqueue(4);
    qu.enqueue(12);

    cout << qu.peek()<<endl;
    cout << qu.empty()<<endl;
    qu.dequeue();
    cout<<qu.peek()<<endl;
}