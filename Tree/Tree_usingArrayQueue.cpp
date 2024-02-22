#include<iostream>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q;   //[Node *]* : pointer to [pointer to node]

public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node *x);
    Node *dequeue();

};


Queue::Queue(int size)
{
    this->size=size;
    front=-1;
    rear=-1;
    Q=new Node*[size];
}

Queue::~Queue()
{
    delete []Q;
}

bool Queue::isEmpty()
{
    if(front==rear) return true;
    return false;
}

bool Queue::isFull()
{
    if(rear==size-1) return true;
    return false;
}

void Queue::enqueue(Node *x)
{
    if (isFull()) cout<<"Queue Overflow"<<endl;
    else 
        rear++;
        Q[rear]=x;
}

Node *Queue::dequeue()
{
    Node* x=nullptr;
    if(isEmpty())
    {
        cout<<"Queue is Underflow"<<endl;
    }
    else 
    {
        front++;
        x=Q[front];
    }
    return x;
}

class Tree
{
private:
    Node *root;
public:
    Tree(){root=nullptr;}
    ~Tree();
    void createTree();
    void preOrder(){preOrder(root);}    // Passing Private Parameter in Constructor
    void 
};