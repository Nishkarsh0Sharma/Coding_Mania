#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
}
*first=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=first->pre=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        t->pre=last;
        last->next=t;
        last=t;
    }
}


void Display(struct Node *p)
{
    p=first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int lenght(struct Node *p)
{
    int len=0;
    p=first;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

//Inserting in a Doubly LL
//1.Before first Node.
//2.At any position
void insert(struct Node *p,int index ,int x)
{
    struct Node *t;
    if( index < 0 || index > lenght(first))
     return ;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(index==0)
    {
        t->data=x;
        t->pre=NULL;
        if(first==NULL)
        {
            first->next=NULL;
            first=t;
        }
        else
        {
            t->next=first;
            first->pre=t;
            first=t;
        }
    }
    else 
    {
        for(int i=0;i<index-1;i++)p=p->next;
        t->data=x;
        t->next=p->next;
        t->pre=p;
        if(p->next)p->next->pre=t;
        p->next=t;
    }
}



int main()
{
    int A[]={8,2,3,9,4,1};
    create(A,6);
    printf("number of element is: %d \n",lenght(first));
    insert(first,0,11);
    insert(first,7,99);
    Display(first);
    return 0;
}