#include<iostream>
using namespace std;

class Node
{
public:
    class Node *pre;
    int data;
    class Node *next;
};

class DoublyLinkedList
{
private:
    Node *Head;
public:
    DoublyLinkedList();
    DoublyLinkedList(int A[], int n);
    ~DoublyLinkedList();
    void Display();
    int Length();
    void Insert(int index, int x);
    int Delete(int index);
    void Reverse();
};

DoublyLinkedList::DoublyLinkedList()
{
    Head=new Node;
    Head->pre=nullptr;
    Head->data=0;
    Head->next=nullptr;
}

DoublyLinkedList::DoublyLinkedList(int A[], int n)
{
    Node *t,*last;
    int i;
    Head=new Node;
    Head->data=A[0];
    Head->next=Head->pre=NULL;
    last=Head;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        t->pre=last;
        last->next=t;
        last=t;
    }
}

void DoublyLinkedList::Display()
{
    Node *p=Head;
    while(p)
    {
        cout<<p->data<<flush;
        p=p->next;
        if(p)cout<<"<->"<<flush;
    }
    cout<<endl;
}

int DoublyLinkedList::Length() 
{
    int length = 0;
    Node* p = Head;
    while (p != nullptr){
        length++;
        p = p->next;
    }
    return length;
}

void DoublyLinkedList::Insert(int index, int x) 
{
    if (index < 0 || index > Length())
        return;

    Node* p = Head;
    Node* t = new Node;
    t->data = x;

    if (index == 0)
    {
        t->pre = nullptr;
        t->next = Head;
        Head->pre = t;
        Head = t;
    } 
    else 
    {
        for (int i=0; i<index-1; i++)
            p = p->next;
        t->pre = p;
        t->next = p->next;
        if (p->next)
        {
            p->next->pre = t;
        }
        p->next = t;
    }
}

int DoublyLinkedList::Delete(int index) 
{
    int x = -1;
    Node* p = Head;

    if (index < 0 || index > Length())
        return x;

    if (index == 1)
    {
        Head = Head->next;
        if (Head)
        {
            Head->pre = nullptr;
        }
        x = p->data;
        delete p;
    } 
    else 
    {
        for (int i=0; i<index-1; i++)
        {
            p = p->next;
        }
        p->pre->next = p->next;
        if (p->next)
        {
            p->next->pre = p->pre;
        }
        x = p->data;
        delete p;
    }
    return x;
}

void DoublyLinkedList::Reverse() 
{
    Node* p = Head;
    Node* temp;
    while (p != nullptr)
    {
        temp = p->next;
        p->next = p->pre;
        p->pre = temp;
        p = p->pre;

        // Need to check the following condition again
        if (p->next == nullptr)
        {
            p->next = p->pre;
            p->pre = nullptr;
            Head = p;
            break;
        }
    }
}

DoublyLinkedList::~DoublyLinkedList()
{
    Node *p=Head;
    while(Head)
    {
        Head=Head->next;
        delete p;
        p=Head;
    }
}

int main()
{
    int A[]={1,2,3,4,5,6};
    DoublyLinkedList dll(A,sizeof(A)/sizeof(A[0]));
    cout<<"Length :"<<dll.Length()<<endl;

    dll.Insert(0, 11);
    dll.Insert(6, 13);
    dll.Display();

    dll.Delete(1);
    dll.Delete(6);
    dll.Display();

    dll.Reverse();
    dll.Display();

    return 0;
}