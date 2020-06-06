#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 100
//输入数组元素
extern void inputData(double*,int);
//对数组进行排序（升序或降序）
extern void sortData(double*, int,int);
//显示排序结果
extern void outputData(double*,int);
int main()
{
//mode:排序方式，为0表示升序，非0表示降序
    int N,mode;
    int k;
    double data[MAXNUM];
    //输入
    printf("请输入数字个数和排序模式(0为升序,非零数为降序),用空白符隔开,如4 0:\n");
    scanf("%d%d",&N,&mode);
    inputData(data,N);
    //排序
    sortData(data,N,mode);
    //显示排序结果
    outputData(data,N);
    return 0;
}
