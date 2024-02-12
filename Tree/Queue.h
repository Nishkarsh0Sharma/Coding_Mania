
// Queue Header File //
#ifndef Queue_h
#define Queue_h

struct Node 
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};


struct Queue
{
    int size;
    int front;
    int Rear;
    struct Node **Q;    //this is a pointer array to pointer and it's going to pointer of type node
    //Node type pointer to a pointer
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->Rear=0;
    q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
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

int isEmpty(struct Queue q)
{
    return q.front==q.Rear;
}

#endif /*Queue_h*/