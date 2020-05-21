#include <stdio.h>

void str_upsidedown(char *str)
{
    char tmp[80];
    int i,length_str;
    for(length_str=0;str[length_str]!='\0';length_str++); // 求数组长度  
    for(i=0;str[i]!='\0';i++)
        tmp[length_str-1-i]=str[i];
    tmp[i]='\0';
    for(i=0;tmp[i]!='\0';i++)
        str[i]=tmp[i];
    str[i]='\0';
}

int main(void)
{
    char str[80];
    scanf("%s",str);
    str_upsidedown(str);
    printf("%s",str);
    return 0;
}
