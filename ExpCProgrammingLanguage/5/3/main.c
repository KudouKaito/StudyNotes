#include <stdio.h>
#include "myString.c"
int main(void)
{
    char str[80];
    printf("copy \"hello\" to str:%s\n",myStrcpy(str,"hello"));
    printf("cat \" world\" to str:%s\n",myStrcat(str," world"));
    printf("now length of str is %zd\n",myStrlen(str));
    printf("result of myStrcmp(str,\"hello what?\") %d\n",myStrcmp(str,"hello world"));
    return 0;
}
