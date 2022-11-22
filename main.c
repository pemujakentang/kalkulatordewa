#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main_process();

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

void factorialCalc(){
    
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
    printf("Pilih Salah Satu Opsi Berikut: (Ketikkan Angka Depan Opsi)\n");
    printf("1. Kalkulator Konvensional (Tambah Kurang Kali Bagi Modulus)\n");
    printf("2. Faktorial (Input 1 angka untuk mendapatkan faktorialnya.)\n");
    printf("3. Kalkulator deret aritmatika/geometri.\n");
    printf("4. Help\n");
    printf("5. Exit\n");
    
    int selectionInput;
    scanf("%d", &selectionInput);
    
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
    case 4:
        printHelp();
    case 5:
        exit(0);
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