#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int num=0, lwr=0, upr=0, others=0;
    do
    {
        system("stty raw");
        ch=getchar();
        system("stty -raw");
        if(ch>='0' && ch<='9')
        {
            num++;
        }
        else if(ch>='A' && ch<='Z')
        {
            upr++;
        }
        else if(ch>='a' && ch<='z')
        {
            lwr++;
        }
        else
        {
            others++;
        }
    }while(ch!='q' && ch!='Q');
    printf("%d %d %d %d", num, lwr, upr, others);
    return 0;
}
