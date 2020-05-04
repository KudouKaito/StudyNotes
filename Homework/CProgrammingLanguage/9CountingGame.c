#include<stdio.h>
int main(void)
{
    int n,i,j,count=-1,a[500]={};
    do{
        printf("Please input number between 3 to 500:\n");
        scanf("%d",&n);
    }while(n<=3 || n>=500);
    // 排队
    for(i=0;i<n;i++)
        a[i]=i+1;
    a[i]=-1;
    // 报数重排
    do{
        for(i=0,j=0;a[i]!=-1;i++)
        {
            //报数
            count++;
            count%=3;
            if(count+1==3)
                continue;// 当为报数是3时,跳过不写入数组
            a[j]=a[i];// i为重排前序号,j为重排后序号
            j++;
        }
        a[j]=a[i];// 给a数组第j个位置重新添上结束标记
    }while(a[1]!=-1);// 只剩一个数的时候跳出循环
    printf("%d",a[0]);// 输出剩下的那个数
    return 0;
}
