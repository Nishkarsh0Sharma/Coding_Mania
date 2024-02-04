#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}
*Top=NULL;

void push(int x)
{
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)printf("stack overflow\n"); //this case happen when heap memory is full.
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
}

int pop()
{
    struct Node *p;
    int x=-1;
    if(Top==NULL)printf("stack underflow\n");
    else
    {
        p=Top;
        Top=Top->next;
        x=p->data;
        free (p);
    }
    return x;
}

int peek(int pos)
{
    int x=-1;
    struct Node *p=Top;
    for(int i=0;p!=NULL && i<pos-1;i++)p=p->next;
    if(p!=NULL)
        return p->data;
    return -1;
}

void Display()
{
    struct Node *p;
    p=Top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    Display();

    printf("poping value is : %d\n",pop());
    printf("poping value is : %d\n",pop());
    printf("poping value is : %d\n",pop());
    printf("poping value is : %d\n",pop());
    printf("peeking value is : %d\n",peek(1)); 

    Display();
    return 0;
}