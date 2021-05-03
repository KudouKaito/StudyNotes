#include<stdio.h>
#define uint_8t unsigned char

int main()
{
    uint_8t integer;
    uint_8t n_five;
    uint_8t n_two;
    uint_8t i = 0;
    printf("请输入面额为十元倍数的整钱(<=100):");
    scanf("%hhu", &integer);
    if (integer%10 != 0  || integer/10 <= 0) {
        printf("ERROR: 面额必须为十的倍数.");
        return -1;
    }
    for (n_five = 1; 5*n_five <= integer-3; n_five++) {
        for (n_two = 1; 2*n_two+5*n_five <= integer-1; n_two++) {
            i++;
            printf("5元:%d 2元:%d 1元:%d\n", n_five, n_two, integer-5*n_five-2*n_two);
        }
    }
    printf("共%hhu种", i);
    return 0;
}
