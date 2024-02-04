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

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int precedence(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else 
        return 0;
}

char * Infix_2_Postfix(char *Infix)
{
    int i,j=0;
    char *Postfix;
    long len=strlen(Infix);
    Postfix=(char *)malloc((len+2)*sizeof(char));

    while(Infix[i]!='\0')
    {
        if(isOperand(Infix[i]))
            Postfix[j++]=Infix[i++];

        else if( precedence(Infix[i]) > precedence(Top->data) )
            push(Infix[i++]);
        
        else  // in case of greater or equal pop out value from stack & append in postfix
            Postfix[j++]=pop();
    }
    while(Top!=NULL)
    {
        Postfix[j++]=pop();
        Postfix[j]='\0';
    }
    return Postfix;

}


int main()
{
    char *Infix="a+b*c-d/e";
    push('#');

    char *postfix=Infix_2_Postfix(Infix);
    printf("%s ",postfix);

    return 0;
}
