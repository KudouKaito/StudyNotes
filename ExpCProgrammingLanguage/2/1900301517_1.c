#include <stdio.h>
int  main()
{
 	int i=1;
 	int sum=0;
 	while (i<=100)// while在前面不需要分号
 	{
 		sum+=i;
        i++;// 如果没有这个语句, i永远不变, 死循环
	}
 	printf("sum=%d\n",sum);
	    return  0;
}
