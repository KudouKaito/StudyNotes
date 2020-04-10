#include<stdio.h>
int main(void)
{
    unsigned short i,j,cube[5][5],sum_std,sum_comp1,sum_comp2;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%hu",&cube[i][j]);
    // 先取左下右上对角线计算和作为标准
    for(i=0,sum_std=0;i<5;i++)
            sum_std+=cube[i][4-i];
    // 判断左上右下对角线
    for(i=0,sum_comp1=0;i<5;i++)
            sum_comp1+=cube[i][i];
    if(sum_std!=sum_comp1)
    {
        printf("NO\n");
        goto END;
    }
    // 判断行和列
    for(i=0;i<5;i++)
    {
        for(j=0,sum_comp1=0;j<5;j++)
            sum_comp1+=cube[i][j];
        for(j=0,sum_comp2=0;j<5;j++)
            sum_comp2+=cube[j][i];
        if(sum_std!=sum_comp1||sum_std!=sum_comp2)
        {
            printf("NO\n");
            goto END;
        }
    }
    printf("YES\n");
END:
    // show cube
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%3hu",cube[i][j]);
        printf("\n");
    }
    //for(i=0;j<25;i++)
    return 0;
    
}
