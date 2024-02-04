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



