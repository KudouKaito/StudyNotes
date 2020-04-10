/*
改正下列程序错误，使之能够统计数组元素之和并输出。
*/
#include <stdio.h>
int  main(void)
{
	int a[5]={5,4,3,2,1};
	int i,sum=0;// 变量使用之前得先声明,并且给自己累加之前得先初始化
	for (i=1;i<=5;i++)
	{
		sum=sum+a[i-1];// 数组引索从零开始,最大引索比数组长度小1
	}
	printf("sum=%d\n",sum);// 变量大小写,并且格式字符要和变量类型对应
	return  0;
}
