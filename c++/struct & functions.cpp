#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct rectangle 
{
    int length;
    int breadth;
};
int area(struct rectangle r)
{
    return (r.length*r.breadth);
}
int perimeter(struct rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);
    return (p);
}
int main()
{
    struct rectangle r={0,0};
    printf("entre length and breadth:");
    cin>>r.length>>r.breadth;
    int a=area(r);
    int peri=perimeter(r);
    printf("area=%d\nperimeter=%d\n",a,peri);
    return 0;
}