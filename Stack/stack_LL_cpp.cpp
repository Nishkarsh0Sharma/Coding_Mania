#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    struct Node *next;
};

class stack
{
private:
    Node *Top;
public:
    stack();
    ~stack();
    void push(int x);
    int pop();
    int peek(int index);
    int isEmpty();
    int isFull();
    int stackTop();
    void Display();

};

stack::stack()
{
    Top=nullptr;
}

stack::~stack()
{
    Node *p=Top;
    while(p!=nullptr)
    {
        Top=Top->next;
    }
    delete p;
    p=Top;
}

void stack::push(int x)
{
    Node *t=new Node;
    if(t==nullptr)cout<<("stack overflow\n")<<endl; //this case happen when heap memory is full.
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
}

int stack::pop()
{
    Node *p;
    int x=-1;
    if(Top==nullptr)cout<<("stack underflow\n");
    else
    {
        p=Top;
        Top=Top->next;
        x=p->data;
        delete (p);
    }
    return x;
}

int stack::isEmpty()
{
    return Top ? 0 : 1;
}

int stack::isFull()
{
    Node *t=new Node;
    int r=t ? 1 : 0;
    delete t;
    return r;
}

int stack::stackTop()
{
    return Top ? Top->data : -1;
}

int stack::peek(int index)
{
    if (isEmpty()) return -1;
    int x=-1;
    Node *p=Top;
    for(int i=0;i<index-1 && p!=nullptr;i++)
        p=p->next;
    return p ? p->data : -1;
}

void stack::Display()
{
    Node *p;
    p=Top;
    while(p!=NULL)
    {
        cout<<(" %d ",p->data);
        p=p->next;
    }
    cout<<("\n");
}

int main()
{
    int A[]={1,2,3,4,5};
    stack st;
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++)
        st.push(A[i]);
    st.Display();
    cout << "Stack peek at 3rd: " << st.peek(3) << endl;
    cout << "Stack peek at 10th: " << st.peek(10) << endl;
    cout << "Stack top: " << st.stackTop() << endl;
    cout << "Stack full: " << st.isFull() << endl;
    cout << "Stack empty: " << st.isEmpty() << endl;
    return 0;
}



