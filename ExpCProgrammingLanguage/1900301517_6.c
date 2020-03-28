#include<stdio.h>
#include<math.h>
int main(void)
{
    double data1, data2, result;//定义需要运算的两个数和结果
    char operation;
    scanf("%lf%c%lf", &data1, &operation, &data2);
    switch(operation) {
        case '+':result=data1+data2;break;
        case '-':result=data1-data2;break;
        case '*':result=data1*data2;break;
        case '/':
            if(fabs(data2)<=1e-7){
                printf("除数不能为0");
                return 0;
            }
            result=data1/data2;break;
        default:
            printf("运算符有误");
            return 0;
    }
    printf("%.2lf", result);
    return 0;
}
