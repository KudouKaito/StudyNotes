/*这是一个统计单词个数的程序*/
#include<stdio.h>
int main (void)
{
    int beBlank=1,i,words=0;
    char ch;
    while(1)
    {
        ch=getchar(); 
        if(ch=='\n')break;
        else if(ch==' ')beBlank=1;
        else if(beBlank==1){beBlank=0;words++;}
    }
    printf("%d",words);
    return 0;
}
