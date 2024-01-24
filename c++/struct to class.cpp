#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class rectangle 
{ public:
    int length;
    int breadth;

void initalize(int l,int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return (length*breadth);
}
int perimeter()
{
    int p;
    p=2*(length+breadth);
    return (p);
}
};
int main()
{
    rectangle r;
    int l,b;
    printf("entre length and breadth:");
    cin>>l>>b;
    r.initalize(l,b);
    int a=r.area();
    int peri=r.perimeter();
    printf("area=%d\nperimeter=%d\n",a,peri);
    return 0;
}