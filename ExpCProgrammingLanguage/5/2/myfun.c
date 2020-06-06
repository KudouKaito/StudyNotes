#include<stdio.h>
//请按提示补充完成主函数中调用的自定义函数的代码
//特别要求：sortData(排序函数）中肯定会涉及到交换两个元素的值的交换，这是一个通用功能，因此，这里首先定义swap函数用于实现这一功能,sortData中必须调用
//这个函数，若不按照这个要求，有权扣分
/**********swap函数的定义开始**********/
void swap(double *a,double *b)
{
    double tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
/********swap函数定义结束**************/
/****************其他所有函数定义开始**********/
void inputData(double* accept, int n)
{
    int i;
    printf("请输入%d个数,用空白符隔开:\n",n);    
    for(i=0;i<n;i++)
        scanf("%lf",accept+i);
}

void sortData(double* data,int n,int mode)
{
    int i,j,min_or_max;
    for(i=0;i<n;i++)
    {
        min_or_max=i;
        for(j=i+1;j<n;j++)
        {
            if(*(data+min_or_max)>*(data+j)&&!mode)
            {
                min_or_max=j;
            }else if(*(data+min_or_max)<*(data+j)&&mode){
                min_or_max=j;
            }

        }
        swap(data+i,data+min_or_max);
    }
}

void outputData(double* data,int n)
{
    int i;
    printf("处理结果如下:\n");
    for(i=0;i<n;i++)
        printf("%.2lf ",*(data+i));
}
/**************其他所有函数定义结束**************/
