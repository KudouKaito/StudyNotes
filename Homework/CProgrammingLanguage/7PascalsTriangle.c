#include<stdio.h>
#define M 10
#define N 10
int main(void)
{
    int triangle[M][N]={1},i,j;
    for(i=1;i<M;i++)
    {
        triangle[i][0]=1;
        for(j=1;j<=i;j++)
        {
            triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",triangle[i][j]);
        }
        printf("\n");
    }
    return 0;
}
