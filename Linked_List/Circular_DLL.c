#include<stdio.h>
#include<stdlib.h>

struct Node
{
    struct Node *pre;
    int data;
    struct Node *next;
}
*Head=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    int i;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head->pre=Head;
    last=Head;

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
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }
    while(p!=Head);
    printf("\n");
}

int lenght(struct Node *p)
{
    int len=0;
    do
    {
        len++;
        p=p->next;
    }
    while(p!=Head);
    return len;
}

//Inserting in a Circular Doubly LL
//1.Before Head Node. (taking O(1) time)
//2.At any position. (taking O(n) time at worst case)
void insert(struct Node *p,int index ,int x)
{
    struct Node *t;
    if( index < 0 || index > lenght(Head))
     return ;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(index==0)
    {
        t->data=x;
        t->pre=NULL;
        t->next=NULL;
        if(Head==NULL)
        {
            Head=t;
        }
        else
        {
            t->next=Head;
            Head->pre=t;
            Head=t;
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
    printf("number of element is: %d \n",lenght(Head));
    // insert(Head,0,11);
    // insert(Head,7,99);
    // Display(Head);
    printf("\n");
    // Delete(0);
    // reverse(Head);
    Display(Head);
    return 0;
}