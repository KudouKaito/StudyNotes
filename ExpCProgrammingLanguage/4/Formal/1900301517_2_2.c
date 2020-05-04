#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define SCORE_PER 10
// 成绩评语
#define COMMENT rightNum<6?"You failed. \nStruggle! Believe Yourself. You can do it!":rightNum<8?"You passed.\nBut you can do better, add oil!":rightNum<10?"Exellent! You do well. Keep up!":"Perfect!You are realy smart!"
int AddTest(int,int);
int main(void)
{
    int i,a,b,rightNum=0;
    // welcome
    printf("Welcome to the pupil addition problems making system.\n");
    printf("We will set 10 addition problems between 1 and 10.\n");
    printf("You can Enter your answer and we will tell you Right or Not.\n");
    printf("Are you ready?(press Enter to continue)");
    getchar();
    for(i=0;i<N;i++)
    {
        // 生成随机数
        srand(time(NULL));
        a=rand()%10+1;
        b=rand()%10+1;
        // 出题
        printf("%d+%d=",a,b);
        // 判断用户输入是否正确
        if(AddTest(a,b))
        {
            printf("Right!\n");
            rightNum++;
        }    
        else
        {
            printf("Not correct!\n");
        }
    }
    printf("Score:%d.\nMistake:%d.\n%s",rightNum*SCORE_PER,N-rightNum,COMMENT);
    return 0;
}

int AddTest(int a,int b)
{
    int userAnswer;
    scanf(" %d",&userAnswer);
    return userAnswer==a+b?1:0;
}
