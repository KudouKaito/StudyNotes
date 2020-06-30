
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
#define N 10

struct {
    int regular;
    int exam;
    float sum;
}score[N];

int main()
{
    int i=0,j,regular,exam;
    FILE * f=NULL,* ft=NULL;
    f=fopen("data.txt","r");
    while(1){
        fscanf(f,"%d %d",&regular,&exam);
        if(feof(f))
            break;
        score[i].regular=regular;
        score[i].exam=exam;
        score[i].sum=score[i].regular*0.2+score[i].exam*0.8;
        i++;
    }
    fclose(f);    
    ft=fopen("T_data.txt","w");
    for(j=0;j<i;j++)
    {
        if(score[j].sum==(int)score[j].sum)
        {
            printf("%d\n",(int)score[j].sum);
            fprintf(ft,"%d\n",(int)score[j].sum);
        }
        else
        {
            printf("%.1f\n",score[j].sum);
            fprintf(ft,"%.1f\n",score[j].sum);
        }
    }
    fclose(ft);
    return 0;
}
