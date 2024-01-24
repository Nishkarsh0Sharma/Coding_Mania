#include<stdio.h>
#include<conio.h>

int fun1(int n)
{
    if (n>0)
    {
    printf("%d\n ",n);
    fun1(n-1);
    fun1(n-1);
    //fun1(n-1);
    //printf("%d\n ",n);
    }
    return 0;
}


int main()
{
    fun1(3);
    //printf("%d\n ",fun1(x));
    return 0;
}