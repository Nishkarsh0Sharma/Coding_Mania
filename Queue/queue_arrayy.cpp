#include<iostream>

using namespace std;

class Queue
{
private:
    int size;
    int front;
    int Rear;
    int *Q;

public:
    Queue(){size=10 ; front=Rear=-1 ; Q=new int[size];}
    Queue(int size){this->size=10 ; front=Rear=-1 ; Q=new int[this->size] ;}
    ~Queue();
    void enqueue(int x);
    int dequeue();
    void Display();
    bool isEmpty();
    bool isFull();
};


Queue::~Queue()
{
    delete []Q;
}

void Queue::enqueue(int x)
{   
    if(Rear==size-1)
        printf("Queue is full \n");
    else
    {
        Rear++;
        Q[Rear]=x;
    }
}

int Queue::dequeue()
{
    int x=-1;
    if(front==Rear)
        printf("Queue is empty");
    else
    {
        front++;
        x=Q[front];
    }
    return x;
}

void Queue::Display()
{
    for(int i=front+1 ; i<=Rear ; i++)
    {
        printf("%d ",Q[i]);
    }
    printf("\n");
}


bool Queue::isEmpty()
{
    return front==Rear ? 1 : 0;
}


bool Queue::isFull()
{
    return Rear==size-1 ? 1 : 0;
}

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.Display();
    
    return 0;
}