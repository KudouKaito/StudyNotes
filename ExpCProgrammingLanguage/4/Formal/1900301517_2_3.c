#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXNUM 40
void initClass(int score[],int num);
float avgClass(int score[],int num);
int main()
{
    float avg;
    int score[MAXNUM];
    int N;
    scanf("%d",&N);
    if(N<0||N>40)
    {
        printf("输入错误");
        return 0;
    }
    initClass(score,N);
    avg=avgClass(score,N);
    printf("平均成绩为%.2f",avg);
    return 0;
}

void initClass(int score[],int N)
{
    int i;
    srand(time(NULL));
    for(i=0;i<N;i++)
    {
        score[i]=rand()%101;
        printf("%d\n",score[i]);
    }
}

float avgClass(int score[],int N)
{
    int i;
    float sum=0.0f;
    for(i=0;i<N;i++)
        sum+=score[i];
    return sum/N;
}



