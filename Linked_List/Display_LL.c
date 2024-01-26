#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
}

*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int count(struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p)
{
    if(p!=NULL)
    {
        return Rcount(p->next)+1;
    } return 0;
}

int sum(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    } 
    return s;
}

int Rsum(struct Node *p)
{
    if(p==NULL)
     return 0;
    else 
     return Rsum(p->next)+p->data;
}

int Max(struct Node *p)
{
    int Max=INT_MIN;
    while(p)
    {
        if(p->data>Max)
         Max=p->data;
        p=p->next;
    } 
    return Max;
}

int RMax(struct Node *p)
{
    int x=0;
    if(p==0)
     return INT_MIN;
    else 
    {
        x=RMax(p->next);
        if(x>p->data)
         return x;
        else 
         return p->data;
    }
}

int R1Max(struct Node *p)
{
    int x=0;
    if(p==0)
     return INT_MIN;
    x=RMax(p->next);
    return x>p->data?x:p->data;
    //TERNARY OPERATOR USED "?:"
}

struct Node *Lsearch(struct Node *p,int key)
{
    while(p!=0)
    {
        if(key==p->data)
         return (p);
        p=p->next;
    } return NULL;
}

struct Node *RLsearch(struct Node *p,int key)
{
    if(p==NULL)
     return NULL;
    if(key==p->data)
     return p;
    return RLsearch(p->next,key);
}

//There are two method in Linear Search :
//1.Transpolation (Don't use in LL because we prefer movement of nodes rather than data.)
//2.Move-to-Head (Below)
struct Node *HLsearch(struct Node *p,int key)
{
    struct Node *q;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
        } q=p;
        p=p->next;
    }
}

void insert(struct Node *p,int index,int x)
{
    struct Node *t;
    if(index<0 || index>count(first))return;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
         p=p->next;
        if(p)
        {
            t->next=p->next;
            p->next=t;
        }
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void Rdisplay(struct Node *p)
{
    if(p!=NULL)
    {
        Rdisplay(p->next);
        printf("%d ",p->data);
    }
}

int main()
{
    // int A[]={3,5,7,11,8,9,15,2};
    // struct Node *temp;
    // printf("the count is %d \n",count(first));
    // create(A,8);
    // printf("the max number is %d\n",R1Max(first));
    // temp=HLsearch(first,15);
    // temp=HLsearch(first,8);
    // if(temp)
    //  printf("Key is Found %d\n",temp->data);
    // else
    //  printf("Key is not Found\n");
    insert(first,0,10);
    insert(first,1,20);
    insert(first,2,30);
    display(first);

    return 0;
}