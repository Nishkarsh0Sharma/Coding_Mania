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


int main()
{
    int A[]={8,2,3,9,4,1};
    create(A,6);
    printf("number of element is: %d \n",lenght(first));
    Display(first);
    return 0;
}