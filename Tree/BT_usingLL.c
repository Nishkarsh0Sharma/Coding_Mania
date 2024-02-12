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
    printf("enter the root \n");
    scanf("%d ",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
    root->data=x;
}

int main()
{
    return 0;
}