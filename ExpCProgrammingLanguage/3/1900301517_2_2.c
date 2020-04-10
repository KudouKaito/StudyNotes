#include<stdio.h>
int main()
{
    unsigned short i,j,a[10]={};
    for(i=0;i<40;i++)
    {
        scanf("%hu",&j);
        a[j-1]++;
    }
    printf("Grade\tCount\tHistogram\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%d\t",i+1,a[i]);
        for(j=0;j<a[i];j++)printf("*");
        printf("\n");
    }
    return 0;
}
