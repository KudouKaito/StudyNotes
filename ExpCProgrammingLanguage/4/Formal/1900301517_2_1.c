#include<stdio.h>
double fact(int a);

int main()
{
	double result=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	result+=fact(i);
    }
    printf("1!+2!+...+n!=%lf",result==0?1:result);
    return 0;
}

double fact(int a)
{
    int i;
    double product=1;
    for(i=1;i<=a;i++)
    {
        product*=i;
    }
    return product;
}

