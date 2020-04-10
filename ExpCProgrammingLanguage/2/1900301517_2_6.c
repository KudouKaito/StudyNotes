#include<stdio.h>
int main(void)
{
    int five, two, one, whole, ways=0;
    scanf("%d", &whole);
    for(five=whole/5;five>=1;five--)
    {
        for(two=(whole-five*5)/2;two>=1;two--)
        {
            one=whole-five*5-two*2;
            if(one==0)
            {
                continue;
            }
            printf("%d %d %d\n",five,two,one);
            ways++;
        }
    }
    printf("%d",ways);
    return 0;
}
