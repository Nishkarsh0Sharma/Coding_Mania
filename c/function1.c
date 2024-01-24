#include<stdio.h>
#include<conio.h>
int add(int a,int b) //formal parameters
{
    int c;
    c=a+b;
    return(c);
}
int main()
{
    int x,y,z;
    x=5687;
    y=967;
    z=add(x,y);
    printf("sum of %d",z); //actual parameters
    return 0;

}