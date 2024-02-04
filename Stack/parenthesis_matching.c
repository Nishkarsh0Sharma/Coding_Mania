#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

struct Node
{
    char data;
    struct Node *next;
}
*Top=NULL;

void push(char x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL)printf("stack overflow\n"); //this case happen when heap memory is full.
    else
    {
        t->data=x;
        t->next=Top;
        Top=t;
    }
}

char pop()
{
    struct Node *p;
    char x=-1;
    if(Top==NULL)printf("stack underflow\n");
    else
    {
        p=Top;
        Top=Top->next;
        x=p->data;
        free (p);
    }
    return x;
}


void Display()
{
    struct Node *p;
    p=Top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(Top==NULL)return 0;
            pop();
        }
    }
    if (Top==NULL) return 1;
    else return 0;
}


int main()
{
    char *exp="((a+b)*(c-d))";
    printf("%d \n",isBalanced(exp));
    Display();
    return 0;
}
