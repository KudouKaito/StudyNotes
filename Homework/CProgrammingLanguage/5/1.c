#include <stdio.h>
#include <string.h>
int transpose(const int transposed_array[3][3],int accept[3][3])
{
    unsigned short i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            printf("%d ",**(transposed_array+i*3+j));
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            **(accept+i*3+j)=**(transposed_array+i*3+j);
            printf("%d ",**(accept+i*3+j));
        }
        putchar('\n');
    }        
    return 0;
}
int main(void)
{
    int array[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            printf("%d ",*(*array+i*3+j));
    transpose(array,array);
    return 0;
}
