#include<stdio.h>
int numDeparateWith5(char [],int []);
void sort(int [],int);
int exchange(int *,int *);

int main(void)
{
    char numStr[80]={};
    int separated[80]={},segments;
    scanf("%s",numStr);
    segments=numDeparateWith5(numStr,separated);// 分隔文本,并返回分隔段数
    sort(separated,segments);// 排序
    for(int i=0;i<segments;i++)
        printf("%d ",separated[i]);
    return 0;
}
/**将pendingStr分隔,并储存在adopter数组里,返回分割段数*/
int numDeparateWith5(char pendingStr[],int adopter[])
{
    int i,mark=1,numReading,count=0;
    for(i=0;pendingStr[i]!='\0';i++)
    {
        numReading=pendingStr[i]-'0';// 将字符转换为数字
        //// 将5看成空格,跳过,并转换到下一个数组储存下一个数字
        //if(pendingStr[i]=='\0'){count--;break;}
        if(numReading!=5)
        {
            if(mark==1)
            {
                count++;
            }
        }
        else
        {
            mark=1;
            continue;
        }
        adopter[count-1]*=10;
        adopter[count-1]+=numReading;
        mark = 0;// 0表示非5数
    }
    return count;
}
/*对a排序*/
void sort(int a[],int n)
{
    int min,i,j;
    for(min=i=0;i<n;min=++i)
        for(j=i;j<n || exchange(&a[i],&a[min]);j++) // exchange返回值为0
            // 每一次循环,在为排序数据中寻找最小值,循环结束之际将最小值所在位置与首位数据互换,使首位值最小
            if(a[j]<a[min])
                min=j;
}
/*交换a,b的值*/
int exchange(int * a,int * b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
    return 0;
}

