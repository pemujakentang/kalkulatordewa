#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <fenv.h>

int main_process();

void convCalc(){
    double val1; char operator;
    printf("Input initial value: \n");scanf("%lf",&val1);
    double result = val1;
    while (1)
    {   
        printf("Input operator (+)(-)(*)(/)(%): (or input = to get result)\n");scanf("%s",&operator);
        if (operator=='=')
        {
            printf("%g\n", result);
            main_process();
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
            main_process();
            break;
        default:
            printf("Invalid input, calculator will exit.\n");
            main_process();
            break;
        }
    }
}

void factorialCalc(){
    int n, factorial=1;
    printf("Calculate factorial of an integer\n");
    printf("Input integer: ");scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    printf("%d! = %d\n", n, factorial);
    main_process();
}

int fibonacci(int n){
    if (n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else {
        return(fibonacci(n-2) + fibonacci(n-1));
    }
}

void fibonacciCalc(){
    int n;
    printf("Input n: ");scanf("%d", &n);
    printf("%d\n",fibonacci(n));
    main_process();
}

void deretCalc(){
    printf("Work In Progress\n");
    main_process();
}

void printHelp(){
    printf("Help\n");
    main_process();
}

int main_process(){
    printf("\n\n");
    printf("=====================[ CALCULATOR DEWA ]===================\n");
    printf("=====Samuel Maximus Lamere=====Bonifasius Martin============\n\n");
    
    printf("Pilih Salah Satu Opsi Berikut: (Ketikkan Angka Depan Opsi)\n");
    printf("1. Kalkulator Konvensional (Tambah Kurang Kali Bagi Modulus)\n");
    printf("2. Faktorial (Input 1 angka untuk mendapatkan faktorialnya.)\n");
    printf("3. Kalkulator deret aritmatika/geometri.\n");
    printf("4. Print angka fibonacci ke-n\n");
    printf("9. Help\n");
    printf("0. Exit\n");
    
    int selectionInput;
    scanf("%d", &selectionInput);printf("\n");
    
    switch (selectionInput)
    {
    case 1:
        convCalc();
        break;
    case 2:
        factorialCalc();
        break;
    case 3:
        deretCalc();
        break;
    case 4:
        fibonacciCalc();
        break;
    case 9:
        printHelp();
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("Invalid input, please try again.\n");
        main_process();
        break;
    }
}

int main(){
    main_process();
    return 0;
}