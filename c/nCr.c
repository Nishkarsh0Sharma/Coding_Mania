#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if (n==0) return 1;
    return fact(n-1)*n;
}

int nCr(int n,int r)
{
    int t0,t1,t2;
    t0=fact(n);
    t1=fact(r);
    t2=fact(n-r);
    return t0/(t1*t2);
}

//PASCAL TRIANGLE 
int C(int n,int r)
{
if (r==0 || r==n)
return 1;
return C(n-1,r-1)+C(n-1,r);
}


int main()
{
    printf("%d\n ",C(5,2));
    return 0;
}