#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int area(int length,int breadth)
{
    return (length*breadth);
}
int perimeter(int length,int breadth)
{
    int p;
    p=2*(length+breadth);
    return (p);
}

int main()
{
    int length=0,breadth=0;
    printf("entre length and breadth:");
    cin>>length>>breadth;
    int a=area(length,breadth);
    int peri=perimeter(length,breadth);
    printf("area=%d\nperimeter=%d\n",a,peri);
    return 0;
}