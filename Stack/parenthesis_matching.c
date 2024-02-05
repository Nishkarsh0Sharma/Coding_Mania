#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

struct Node
{
    int data;
    struct Node *next;
}
*Top=NULL;

void push(int x)
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

int pop()
{
    struct Node *p;
    int x=-1;
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

int evalPOSTFIX(char *postfix)
{
    int i=0;
    int x1,x2,r=0;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
            push(postfix[i]-'0');
        else
        {
            x2=pop();x1=pop();
            switch (postfix[i])
            {
            case '+' : r=x1+x2 ; push(r) ;break;
            case '-' : r=x1-x2 ; push(r) ;break;
            case '*' : r=x1*x2 ; push(r) ;break;
            case '/' : r=x1/x2 ; push(r) ;break;
            }
        }
    }
    return Top->data;
}


int main()
{
    char *postfix="35*62/+4-";
    printf("Result is %d\n ",evalPOSTFIX(postfix));

    return 0;
}
