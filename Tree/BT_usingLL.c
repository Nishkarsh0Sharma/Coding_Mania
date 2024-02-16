#include<stdio.h>
#include<stdlib.h>
#include "Queue.h"

//////////////////////////////////

struct Node *root=NULL;

void TreeCreate()
{
    struct Node *t,*p;
    int x;
    struct Queue q;
    create(&q,100);

    printf("enter the root ");
    scanf("%d",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
        p=dequeue(&q);

        printf("enter left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }

        printf("enter right child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}

void preOrder(struct Node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void postOrder(struct Node *p)
{
    if(p)
    {
        postOrder(p->lchild);
        postOrder(p->rchild);
        printf("%d ",p->data);
    }
}

void inOrder(struct Node *p)
{
    if(p)
    {
        inOrder(p->lchild);
        printf("%d ",p->data);
        inOrder(p->rchild);
    }
}

//    LevelOrder Traversal   //
void LevelOrder(struct Node *p)
{

}




int main()
{
    TreeCreate();
    preOrder(root);

    printf("\nPostOrder :");
    postOrder(root);

    printf("\nInOrder :");
    inOrder(root);

    return 0;
}