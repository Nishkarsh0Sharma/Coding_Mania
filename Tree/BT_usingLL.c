#include<stdio.h>
#include<stdlib.h>
// #include "Queue.h"


struct Queue
{
    int size;
    int front;
    int Rear;
    int **Q;    //Node type pointer to a pointer
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->Rear=0;
    q->Q=(int **)malloc(q->size*sizeof(int *));
}

void enqueue(struct Queue *q,struct Node *x)
{
    if((q->Rear+1)%q->size==q->front)
        printf("Queue is full\n");
    else
    {
        q->Rear=(q->Rear+1)%q->size;
        q->Q[q->Rear]=x;
    }
}

struct Node * dequeue(struct Queue *q)
{
    struct Node *x=NULL;
    if(q->front==q->Rear)
        printf("Queue is Empty\n");
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

//////////////////////////////////

struct Node *root=NULL;
void TreeCreate()
{
    struct Node *t,*p;
    int x;
    struct Queue q;
    create(&q,100);
    printf("enter the root \n");
    scanf("%d ",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;
}

int main()
{
    return 0;
}