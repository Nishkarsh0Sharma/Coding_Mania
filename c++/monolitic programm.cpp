#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
     int length=0,breadth=0;
     printf("entre lenght and breadth:");
     cin>>length>>breadth;//scanf("%d %d",lenght, breadth);
     int area=length*breadth;
     int peri=2*(length+breadth);
     printf("area=%d\nperi=%d",area,peri);
    return 0;
}