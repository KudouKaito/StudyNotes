/*
本关任务：用户输入测试集中所给的N 个正整数存入数组 a 中，输出 a 中的最大值，最小值及求出其平均值（保留两位小数）。
测试时请注意：请用平台给的测试集的格式输入，对你编写的代码进行测试，请在输入时，用第一个数代表你要输入几个整数，
后面每一行的值（即每个数据输完即回车占一行）依次为你给的若干正整数。
遇到没输入完毕就结束的情况，可以在scanf语句前加个语句：fflush(stdin);
*/
#include <stdio.h>
int  main(void)
{
    unsigned short N,a[10],i,i_max=0,i_min=0,sum=0;
    printf("What number do you want to deal with?\n");
	scanf("%hu",&N);
    printf("Please type in %d number:\n",N);
    for(i=0;i<N;i++)
    {
        scanf(" %hu",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i_max]<a[i])i_max=i;
        if(a[i_min]>a[i])i_min=i;
        sum+=a[i];
    }
    printf("max=%hu,min=%hu,average=%0.2f",a[i_max],a[i_min],sum*1.0/N);
	return  0;
}
