#include <stdio.h>
#include <stdlib.h>
#define N 1000000
// typedef unsigned int size_t;
void print_pg_(size_t size_,size_t now_,size_t show_long){
//    system("clear");
    size_t len_ = now_*show_long/size_;
    if(len_!=(now_-1)*show_long/size_) {
        fflush(stdout);
        printf("\r");
        printf("Now : [");
        for (size_t i = 0; i < len_; i++)
            printf("*");
        for (size_t i = 0; i < show_long-len_; i++)
            printf(" ");
        printf("]");
    }
}
int main(void)
{
    size_t i,j;
    size_t sum = 0;
    for(i=0; i<N; i++)
    {
        print_pg_(N,i,1000);
        for(j=0; j<N; j++)
            sum++;
    }
    return 0;
}
