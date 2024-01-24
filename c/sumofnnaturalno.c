#include<stdio.h>
#include<conio.h>

//  int main()
// {
//    int n,sum;
//    n=5;
//    sum=n*(n+1)/2;
//    printf("%d\n ",sum);
//    return 0;
// }

//   int main()
// {
//    int n,sum;
//    n=5;
//    for(int i=1;i<=n;i++)
//    sum=sum+i;
//    printf("%d\n ",sum);
//    return 0;
// }

int sum(int n)
{
    if (n==0)
    return 0;
    return sum(n-1)+n;

}
int main()
{
    int r=sum(5);
    printf("%d\n ",r);
    return 0;
}