#include<stdio.h>
#include<conio.h>

//FIBONACCI SERIES :-  0 1 1 2 3 5 8 13 21 ......    
//N=(N-2)+(N-1)

//RECURSION
int fibo(int n)
{ 
    if (n<=1)
    {
        return (n);
    }
        return fibo(n-2)+fibo(n-1);
    
}

//LOOP
int fibo1(int n)
{
    int t0=0,t1=1,s=0,i;
    if (n<=1) 
    return n;
    for(i=2;i<=n;i++)
    {
     s=t0+t1;
     t0=t1;
     t1=s;
    }
    return s;
}

//MEMOIZATION 
int fibo2(int n)
{
    static int f[10];
     if (n<=1)
     {
     return n;
     }
    else 
    {
      if (f[n-2]==-1)
      f[n-2]=fibo2(n-2);
        if (f[n-1]==-1)
        f[n-1]=fibo2(n-2);
    } 
    f[n]=fibo2(n-2)+fibo2(n-1);
    return fibo(n-2)+fibo2(n-1);
}

int main()
{
printf("%d\n ",fibo2(8));
return 0;
}