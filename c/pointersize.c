#include<stdio.h>
#include<stdlib.h>
struct rectangle 
{
    int lenght;
    int breaadth;
};
int main()
{
    int*p1;
    float*p2;
    char*p3;
    double*p4;
    struct rectangle*p5;
    
    printf("%d\n",sizeof(p1));
    printf("%d\n",sizeof(p2));
    printf("%d\n",sizeof(p3));
    printf("%d\n",sizeof(p4));
    printf("%d\n",sizeof(p5));
    return 0;
}
