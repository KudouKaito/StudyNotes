#include <stdio.h>
#include <string.h>
void print_int_array(int array[3][3]);
void transpose(const int array[3][3],int accept[3][3])
{
    unsigned short i,j;
    int tmp[3][3];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            tmp[i][j]=array[j][i];
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            accept[i][j]=tmp[i][j];
}

int main(void)
{
    int array[3][3]={1,2,3,4,5,6,7,8,9};
    print_int_array(array);
    transpose(array,array);
    print_int_array(array);
    return 0;
}

void print_int_array(int array[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3||printf("\n")&&0;j++)
            printf("%d ",array[i][j]);
}
