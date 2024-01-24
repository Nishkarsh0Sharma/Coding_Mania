#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5]={10,22,56,89,74};
    int *p;
    p = a;
    //p=&a;
    for(int i=0;i<5;i++)
    printf("%d\n",p[i]);
    //printf("%d\n",*p);
    p=(int*)malloc(5*sizeof(int));
    p[0]=58;p[1]=5;p[2]=55;p[3]=39;p[4]=389;
    return 0;
}
