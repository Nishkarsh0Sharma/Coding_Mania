#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Different methods of initialization of 1-D array:
//int main()
//{
//    int A[5];
//    int B[5]={1,2,3,4,5};
//    int C[5]={0};
//    int D[10]={1,2,3,4,5};
//    int E[ ]={1,2};
//    
//    for(int i=0;i<5;i++)
//    printf("%d \n ",B[i]);
//    return 0;
//}

//Different methods of presentation of 2-D array:
int main()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *B[3];
    int **C;
    int i,j;

        for (i=0;i<3;i++);
    {
        for (j=0;j<4;j++)
        printf("%d \n",A[i][j]);
    }

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

            for (int i=0;i<3;i++);
    {
        for (int j=0;j<4;j++)
        printf("%d \n",B[i][j]);
    }

    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

            for (int i=0;i<3;i++);
    {
        for (int j=0;j<4;j++)
        printf("%d \n",C[i][j]);
    }
    
    return 0;
}