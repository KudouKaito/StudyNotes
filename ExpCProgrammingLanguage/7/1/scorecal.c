/* 编写程序实现以下功能
（1）设计一个保存学生成绩信息的结构，包括学号、姓名、课程名、平时成绩、考试成绩、总评成绩。分别用函数实现以下功能：
①输入n个学生的信息（平时和考试成绩）
②要求计算并输出学生的总分（平时２０％，考试８０％）并输出；
③输出总分最高和最低的学生信息。
（2）先用记事本在当前目录下创建一个 data.txt文件，在里面输入保存（１）中的学生成绩（平时及考试成绩），格式如下（平时成绩   考试成绩）：
78  65
80  89
90  85
95  90
90  85
75  80
60  60
95  80
90  85
75  75
存盘关闭；然后写一个程序来打开这个文件，计算总分后显示在屏幕上，同时输出到结果文件T_data.txt文件中。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

struct stdntinfo{
    int number;
    char name[20];
    int regular;
    int exam;
    float sum;
};

int main()
{
    struct stdntinfo info[N];
    int i=0,j,max,min;
    char ch;
    do{
        scanf("%d",&info[i].number);
        getchar();
        for(j=0;(ch=getchar())!=',';j++)
            info[i].name[j]=ch;
        info[i].name[j]='\0';
        scanf("%d,%d",&info[i].regular,&info[i].exam);
        info[i].sum=info[i].regular*0.2+info[i].exam*0.8;
        i++;
    }while(getchar()==',');
    max=min=0;
    for(j=1;j<i;j++)
    {
        if(info[max].sum<info[j].sum)
            max=j;
        if(info[min].sum>info[j].sum)
            min=j;
    }
    for(j=0;j<i;j++)
        printf("%.1f\n",info[j].sum);
    printf("%d %s\n",info[max].number,info[max].name);
    printf("%d %s\n",info[min].number,info[min].name);
    return 0;
}
