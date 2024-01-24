#include<stdio.h>
#include<conio.h>
float add(float a,float b) 
{
    float c;
    c=a+b;
    return(c);
}
float sub(float d,float e)
{
    float f;
    f=d-e;
    return(f);
}
float multiple(float g,float h)
{
    float i;
    i=g*h;
    return(i);
}
float divide(float j ,float k)
{
    float l;
    l=j/k;
    return(l);
}

float main()
{
    float x,y,z,w,v,n;
    //printf("enter any number:");
    //scanf("%d",x);
    //printf("enter another number:");
    //scanf("%d",y);
    x=687;
    y=575;
    z=add(x,y);
    w=sub(x,y);
    v=multiple(x,y);
    n=divide(x,y);
    printf("sum:%f \n",z);
    printf("subsract:%f \n",w);
    printf("multiple:%f \n",v);
    printf("divide:%f \n",n);

    return 0;

}