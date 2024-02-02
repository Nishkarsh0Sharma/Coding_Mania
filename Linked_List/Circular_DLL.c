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