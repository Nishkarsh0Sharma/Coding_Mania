//Abstract Data Type :
//1.Representation of Data.
// 2.Operation on Data.

#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int Top;
    int *S;
};  //WHY WE USE SEMI COLUN " ; " AFTER STRUCTURE REPRESENTATION 
    //IN SOME CASES WE DON'T USE " ; "

void create(struct stack *st)
{
    printf("enter size of stack :");
    scanf("%d ",&st->size);
    st->Top=-1;
    st->S=(int *)malloc(st->size*sizeof(int));
}

void Display(struct stack st)
{
    int i;
    for(i=st.Top;i>=0;i--)
    {
        printf("%d ",st.S[i]);
    }
    printf("\n");
}

void push(struct stack *st , int x)
{
    if(st->Top==st->size-1)
        printf("stack overflow\n");
    else
    {
        st->Top++;
        st->S[st->Top]=x;
    }
}

int pop(struct stack *st)
{
    int x=-1;
    if(st->Top==-1)
        printf("stack underflow\n");
    else
    {
        x=st->S[st->Top--];
    }
    return x;
}



int main()
{
    struct stack st;
    create(&st);
    push(&st,10);
    // push(&st,20);
    // push(&st,30);
    // push(&st,40);
    // push(&st,50);
    printf("%d\n",pop(&st));
    printf("%d\n",pop(&st));
    Display(st);
    return 0;
};