#include<stdio.h>
int main(void)
{
    char ch_long[100], ch_short[50];
    int i, j, times=0, location[100]={}, judge;
    scanf("%s", ch_long);
    scanf("%s", ch_short);
    for(i=0;ch_long[i]!='\0';i++)
    {
        judge=1;// 每次开始判断都认为匹配到了(美好的期待)
        for(j=0;ch_short[j]!='\0';j++)
        {
            if(ch_short[j]!=ch_long[i+j])
            {
                // 发现发现有不一样的字符,判断不匹配(期待破碎)
                judge=0;
                break;
            }
        }
        //如果判断到完全一样,那么就真的匹配到了(和期待的一致)
        if(judge==1)
        {
            // 那么记录匹配成功次数,并输出起始位置
            times++;
            printf("p=%d\n",i+1);
        }
    }
    printf("%d",times);
    return 0;
}
