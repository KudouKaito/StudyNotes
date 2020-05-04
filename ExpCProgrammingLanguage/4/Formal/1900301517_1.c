#include<stdio.h>
int  Max(int a,int b)
{
    int max;
	  if(a>b)
     		max=a;
   		else
     		max=b;
 
		return max;
}
int  main()
{
	int  max,x,y;
	
	scanf("%d%d",&x,&y);
	max=Max(x,y);
	printf("max=%d",max);
	return   0;
}
