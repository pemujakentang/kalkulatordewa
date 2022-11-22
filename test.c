// Program to create a simple calculator
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fenv.h>

int main(){
    double val1; char operator;
    printf("Input initial value: \n");scanf("%lf",&val1);
    double result = val1;
    while (1)
    {   
        printf("Input operator (+)(-)(*)(/)(%): (or input = to get result)\n");scanf("%s",&operator);
        if (operator=='=')
        {
            printf("%g\n", result);
            break;
        }
        
        double val2;
        switch (operator)
        {
        case '+':
            printf("Input value: \n");scanf("%lf",&val2);
            result+=val2;
            break;
        case '-':
            printf("Input value: \n");scanf("%lf",&val2);
            result-=val2;
            break;
        case '/':
            printf("Input value: \n");scanf("%lf",&val2);
            result=result/val2;
            break;
        case '*':
            printf("Input value: \n");scanf("%lf",&val2);
            result=result*val2;
            break;
        case '%':
            printf("Input value: \n");scanf("%lf",&val2);
            result=fmod(result, val2);
            break;
        case '=':
            printf("%g\n", result);
            break;
        default:
            printf("Invalid input, calculator will exit.\n");
            exit(0);
            break;
        }
    }
    return 0;
}