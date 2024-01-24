#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct rectangle
{
int lenght ;
int breadth ;
};

int main()
{
struct rectangle *p;
p=new rectangle;
//p=(struct rectangle*)malloc(sizeof(strcut rectangle));
p->lenght=3245;
p->breadth=3545;
cout<<p->lenght<<endl;
cout<<p->breadth<<endl;
//printf("%d \n",p->lenght);
//printf("%d \n",p->breadth);

    return 0;
}