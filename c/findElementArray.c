#include<stdio.h>
#include<conio.h>

struct Array
{
    int A;
    int size;
    int length;
};

int sum(struct Array a)
{
    int s=0;
    int i;
    for(i=0;i<a.length;i++)
    s=s+A[i];
    return s;
}

// find  single Element from sorted array start and knowing last element in Array
int find1(struct Array *a,int l)
{
    int summation,x,diff;
    diff=A[0]-0;
    for(int i=0;i<a.length-1;i++)
    {
        if(A[i]-i!=diff)
        {
            smmation=l*(l+1)/2;
            x=sum(&a)-summation;
            return x;
        }return 0;
    }
}

// find single element from sorted array but not starting from 1 


int main()
{
    struct Array a={1,2,3,4,5,7,8,9};
    printf("missing element is %d: ",find1(&a,9));
    return 0;
}