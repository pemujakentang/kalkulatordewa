// Program to create a simple calculator
#include <stdio.h>

void convCalc(){
    int val1; char operator;
    printf("Input value: \n");scanf("%d",&val1);
    while (1)
    {   
        printf("Input operator (+)(-)(*)(/)(%): \n");scanf("%c",&operator);
        if (operator=='=')
        {
            printf("%d\n", val1);
            break;
        }
        
        int val2;
        switch (operator)
        {
        case '+':
            scanf("%d",&val2);
            val1+=val2;
        case '-':
            scanf("%d",&val2);
            val1-=val2;
        case '/':
            scanf("%d",&val2);
            val1/=val2;
        case '*':
            scanf("%d",&val2);
            val1*=val2;
        case '%':
            scanf("%d",&val2);
            val1%=val2;
        default:
            printf("Invalid input, calculator will exit.\n");
            main_process();
        }
    }
}