#include<stdio.h>
int main(void)
{
    int i, productOfOdd=1, sumOfEven=0;
    for (i=1;i<=20;i++)
    {
        if (i%2==0)sumOfEven+=i;// 偶数累加
        else productOfOdd*=i;// 奇数累乘
    }
    printf("1-20偶数相加的结果为:%d,奇数相乘的结果为:%d\n"
            , sumOfEven, productOfOdd);
    return 0;
}
