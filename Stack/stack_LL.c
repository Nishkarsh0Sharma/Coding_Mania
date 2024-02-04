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
    if(t==NULL)printf("stack overflow\n");
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
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
    Display();
    return 0;
}