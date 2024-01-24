#include<stdio.h>
#include<conio.h>

// e^x= 1 + x/1 + x^2/2! + x^3/3! + x^4/4! +.......+ x^n/n!
//RECURSION

double e3(int x,int n)
{
    static double p=1,f=1;
    double r;
    
    if (n==0)
    return 1; 
    r=e3(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

//ITTRATIVE FORM

double e(int x,int n)
{
    double s=1;
    for(;n>0;n--)
    {
    s=1+(x/n)*s;
    }
    return s;
}

//HORNOR'S RULE

double e1(double x,double n)
{
    static double s=1;
    if (n==0)
    return s;
    s=1+(x/n)*s;
    return e1(x,n-1);

}

//ITITRATIVE FORM
double e2(double x,double n)
{
    double s=1;
    double num=1;
    double dem=1;
    for(int i=1;i<=n;i++)
    {
        num*=x;
        dem*=i;
        s+=num/dem;
    }
    return s;
}

double main()
{
    printf("%lf\n ",e2(1,10));
    return 0;
}