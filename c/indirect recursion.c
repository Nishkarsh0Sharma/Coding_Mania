#include<stdio.h>
#include<conio.h>

void fun2(int n);
void fun1(int n)
{
    if (n>0)
    {
        printf("%d\n ",n);
        fun2(n-1);
    }
}

void fun2(int n)
{
    if (n>1)
    {
        printf("%d\n ",n);
        fun1(n/2);
    }
}

int main()
{ 
    fun1(20);
    return 0;
}