#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int front;
    int Rear;
    int *Q;
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->Rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q,int x)
{   
    if(q->Rear==q->size-1)
        printf("Queue is full \n");
    else
    {
        q->Rear++;
        q->Q[q->Rear]=x;
    }
}

int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->Rear)
        printf("Queue is empty");
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q)
{
    for(int i=q.front+1 ; i<=q.Rear ; i++)
    {
        printf("%d ",q.Q[i]);
    }
    printf("\n");
}

int isEmpty(struct Queue q)
{
    return q.front==q.Rear ? 1 : 0;
}

int isFull(struct Queue q)
{
    return q.Rear==q.size-1 ? 1 : 0;
}

int main()
{
    struct Queue q;
    create(&q,7);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30); 
    Display(q);

    printf("Queue isFull : %d\n ",isFull(q));
    printf("Queue isEmpty : %d\n ",isEmpty(q));

    // printf("dequeue value is :%d ",dequeue(&q));

    return 0;
}