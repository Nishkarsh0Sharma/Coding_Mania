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

Node* root=new Node;

void createTree()
{
    Node* p;
    Node* t;
    int x;
    Queue q(10);

    cout<<"enter root value : "<<flush;
    cin>>x;
    root->data=x;
    root->lchild=nullptr;
    root->rchild=nullptr;
    q.enqueue(root);

    while(! q.isEmpty())
    {
        p=q.dequeue();
        cout<<"enter left child value of "<<p->data<<": "<<flush;
        cin>>x;
        if(x!=-1)
        {
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->lchild=t;
            q.enqueue(t);
        }

        cout<<"enter right child value of "<<p->data<<": "<<flush;
        cin>>x;
        if(x!=-1)
        {
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->rchild=t;
            q.enqueue(t);
        }
    }
}

void preOrder(Node* p)
{
    if(p)
    {
        cout<<p->data<<", "<<flush;
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void inOrder(Node* p)
{
    if(p)
    {
        preOrder(p->lchild);
        cout<<p->data<<", "<<flush;
        preOrder(p->rchild);
    }
}

// void postOrder(Node* p)
// {
//     if(p)
//     {
//         preOrder(p->lchild);
//         preOrder(p->rchild);
//         cout<<p->data<<", "<<flush;
//     }
// }



int main()
{
    createTree();

    preOrder(root);
    cout<<endl;

    inOrder(root);
    cout<<endl;

    postOrder(root);
    cout<<endl;

    return 0;
}


