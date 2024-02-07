#include<iostream>

using namespace std;

class Circular_Queue
{
private:
    int size;
    int front;
    int Rear;
    int *Q;

public:
    Circular_Queue(int size);
    ~Circular_Queue();
    void enqueue(int x);
    int dequeue();
    void Display();
    bool isEmpty();
    bool isFull();
};


Circular_Queue::Circular_Queue(int size)
{
    {
        this->size=size; 
        front=0;
        Rear=0 ; 
        Q=new int[size] ;
    }
}

Circular_Queue::~Circular_Queue()
{
    delete []Q;
}

void Circular_Queue::enqueue(int x)
{   
    if(front==(Rear+1)%size)
        printf("Circular_Queue is full \n");
    else
    {
        Rear=(Rear+1)%size;
        Q[Rear]=x;
    }
}

void Circular_Queue::Display()
{
    int i=front+1;
    do
    {
        cout<<Q[i]<<flush;
        if(i<Rear)
            cout<<" <- "<<flush;
        i=(i+1)%size;
    }while(i!=(Rear+1)%size);
}


int Circular_Queue::dequeue()
{
    int x=-1;
    if(front==Rear)
        printf("Circular_Queue is empty \n");
    else
    {
        front=(front+1)%size;
        x=Q[front];
    }
    return x;
}


int main()
{
    int A[]={1,3,5,7,9};
    Circular_Queue cq(sizeof(A)/sizeof(A[0])+1);
    
    //enqueue
    for(int i=0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        cq.enqueue(A[i]);
    }

 // Display
    cq.Display();
    cout << endl;

// Overflow
    cq.enqueue(10);

    // Dequeue
    for(int i=0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        cq.dequeue();
    }

    // Underflow
    cq.dequeue();

    return 0;
}