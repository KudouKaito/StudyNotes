#include<stdio.h>
#include<float.h>

int main(void)
{
    double operand1, operand2;
    char operator;
    printf("Please enter the expression(e.g. \"3 * 5\"):");
    scanf("%lf %c %lf", &operand1, &operator, &operand2);
    switch(operator) {
        case '+':
            printf("%g %c %g = %g", operand1, operator, operand2, operand1+operand2);
            break;
        case '-':
            printf("%g %c %g = %g", operand1, operator, operand2, operand1-operand2);
            break;
        case '*':
            printf("%g %c %g = %g", operand1, operator, operand2, operand1*operand2);
            break;
        case '/':
            if(operand2 >= -DBL_EPSILON && operand2 <= DBL_EPSILON) { // 宏定义常量可以在前面加符号, 常变量必须用 -1*变量 的形式
                printf("Error: divident cannot be zero.");
                return -1;
            }
            printf("%g %c %g = %g", operand1, operator, operand2, operand1/operand2);
            break;
        default:
            printf("Error: not found the operator '%c'.", operator);
            return -1;
    }
    return 0;
}
