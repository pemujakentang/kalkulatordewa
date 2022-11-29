#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <fenv.h>

int main_process();

// void gonext(){
//     int choice;
//     printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//         return;
//         break;
//     case 0:
//         main_process();
//         break;
//     default:
//         printf("Input invalid, silahkan coba lagi.");
//         gonext();
//         break;
//     }
// }

double findSqrt(double x)
{
    if (x < 2)
        return x;
 
    double y = x;
    double z = (y + (x / y)) / 2;
 
    while (abs(y - z) >= 0.00001) {
        y = z;
        z = (y + (x / y)) / 2;
    }
    return z;
}

int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

void permutation(){
    int n, r;
    printf("Input n: ");scanf("%d", &n);
    printf("Input r: ");scanf("%d", &r);
    if (n>=0 && r>0 && n>r)
    {
        int npr = factorial(n)/factorial(n-r);
        printf("Result: %d\n", npr);
        int choice;
        printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            permutation();
            break;
        case 0:
            main_process();
            break;
        default:
            printf("Input invalid, kembali ke menu utama.\n");
            main_process();
            break;
        };
    }
    else
    {
        printf("Input invalid, silahkan coba lagi.\n");
        permutation();
    }
}

void combination(){
    int n, r;
    printf("Input n: ");scanf("%d", &n);
    printf("Input r: ");scanf("%d", &r);
    if (n>=0 && r>0 && n>r)
    {
        int npr = factorial(n)/(factorial(r)*factorial(n-r));
        printf("Result: %d\n", npr);
        int choice;
        printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            combination();
            break;
        case 0:
            main_process();
            break;
        default:
            printf("Input invalid, kembali ke menu utama.\n");
            main_process();
            break;
        };
    }
    else
    {
        printf("Input invalid, silahkan coba lagi.\n");
        combination();
    }
}

double persegi(double* area, double* perimeter, double* sisi){
    double r;
    printf("Masukkan panjang sisi persegi: "); scanf("%lf", &r);
    *area = r*r;
    *perimeter = 4*r;
    *sisi = r;
}

double persegi_panjang(double* area, double* perimeter){
    double p, l;
    printf("Masukkan panjang: "); scanf("%lf", &p);
    printf("Masukkan lebar  : "); scanf("%lf", &l);
    *area = p*l;
    *perimeter = 2*(p+l);
}

double lingkaran(double* area, double* perimeter){
    double r;
    printf("Masukkan radius lingkaran: ");scanf("%lf", &r);
    *area = M_PI*r*r;
    *perimeter = M_PI*2*r;
}

double segitiga(double* area, double* perimeter, double* alas){
    double a, s1, s2, t;
    printf("Masukkan panjang alas segitiga          : ");scanf("%lf", &a);
    printf("Masukkan tinggi segitiga                : ");scanf("%lf", &t);
    printf("Masukkan panjang sisi pertama segitiga  : ");scanf("%lf", &s1);
    printf("Masukkan panjang sisi kedua segitiga    : ");scanf("%lf", &s2);
    *area = (a*t)/2;
    *perimeter = a+s1+s2;
    *alas = a;
}

double trapezium(double* area, double* perimeter){
    double alas, t, tutup, sisi;
    printf("Masukkan panjang alas trapezium         : ");scanf("%lf", &alas);
    printf("Masukkan panjang tutup trapezium        : ");scanf("%lf", &tutup);
    printf("Masukkan tinggi trapezium               : ");scanf("%lf", &t);
    printf("Masukkan panjang sisi trapezium         : ");scanf("%lf", &sisi);
    *area = ((alas+tutup)/2)*t;
    *perimeter = alas+2*sisi+tutup;
}

void bidangdua(){
//persegi, persegi panjang, lingkaran, segitiga, trapezium
    int selection;
    printf("Pilih bidang dua: (Masukkan angka depan pilihan)\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Segitiga\n");
    printf("5. Trapezium\n");
    printf("0. Kembali ke menu utama\n");
    scanf("%d", &selection);
    double area, perimeter;
    switch (selection)
    {
    case 1:
        persegi(&area, &perimeter, NULL);
        printf("Luas Persegi: %g\nKeliling Persegi: %g\n", area, perimeter);
        break;
    case 2:
        persegi_panjang(&area, &perimeter);
        printf("Luas Persegi Panjang: %g\nKeliling Persegi Panjang: %g\n", area, perimeter);
        break;
    case 3:
        lingkaran(&area, &perimeter);
        printf("Luas Lingkaran: %g\nKeliling Lingkaran: %g\n", area, perimeter);
        break;
    case 4:
        segitiga(&area, &perimeter, NULL);
        printf("Luas Segitiga: %g\nKeliling Segitiga: %g\n", area, perimeter);
        break;
    case 5:
        trapezium(&area, &perimeter);
        printf("Luas Trapezium: %g\nKeliling Trapezium: %g\n", area, perimeter);
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, silahkan coba lagi.\n");
        bidangdua();
        break;
    }
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        bidangdua();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, kembali ke menu utama.");
        main_process();
        break;
    };
}

double kubus(double* volume, double* surface){
    double r;
    printf("Masukkan panjang rusuk kubus: "); scanf("%lf", &r);
    *volume = r*r*r;
    *surface = 6*r*r;
}

double balok(double* volume, double* surface){
    double p,l,t;
    printf("Masukkan panjang: "); scanf("%lf", &p);
    printf("Masukkan lebar  : "); scanf("%lf", &l);
    printf("Masukkan tinggi : "); scanf("%lf", &t);
    *volume = p*l*t;
    *surface = 2*p*l + 2*p*t + 2*l*t;
}

double bola(double* volume, double* surface){
    double r;
    printf("Masukkan radius bola: ");scanf("%lf", &r);
    *volume = (4/3)*M_PI*r*r*r;
    *surface = 4*M_PI*r*r;
}

double prisma_segitiga(double* volume, double* surface){
    double area, perimeter, tinggi;
    segitiga(&area, &perimeter, NULL);
    printf("Masukkan tinggi prisma: ");scanf("%lf", &tinggi);
    *volume = area*tinggi;
    *surface = perimeter*tinggi + 2*area;
}

double tabung(double* volume, double* surface){
    double area, perimeter, tinggi;
    lingkaran(&area, &perimeter);
    printf("Masukkan tinggi tabung: ");scanf("%lf", &tinggi);
    *volume = area*tinggi;
    *surface = perimeter*tinggi + 2*area;
}

void prisma(){
    printf("Pilih prisma: (ketik pililhan)\n");
    printf("1. Segitiga\n");
    printf("2. Tabung\n");
    printf("0. Kembali ke menu sebelumnya\n");
    int selection;
    scanf("%d", &selection);
    double volume, surface;
    switch (selection)
    {
    case 1:
        prisma_segitiga(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 2:
        tabung(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 0:
        bidangtiga();
        break;
    default:
        printf("Input invalid, silahkan coba lagi\n");
        prisma();
        break;
    }
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        bidangtiga();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, kembali ke menu utama.\n");
        main_process();
        break;
    };
}

double limas_segitiga(double* volume, double* surface){
    double area, perimeter, tinggi, tinggisisi, sisi;
    segitiga(&area, &perimeter, &sisi);
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    printf("Masukkan tinggi sisi  : ");scanf("%lf", &tinggisisi);
    *volume = 1/3*area*tinggi;
    *surface = area + 3*(1/2*sisi*tinggisisi);
}

double limas_persegi(double* volume, double* surface){
    double area, perimeter, tinggi, sisi;
    persegi(&area, &perimeter, &sisi);
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    double tinggiSisi=findSqrt(tinggi*tinggi+sisi*sisi);
    double luasSisi=1/2*tinggiSisi*sisi;
    *volume=1/3*area*tinggi;
    *surface=area+3*luasSisi;
}

double kerucut(double* volume, double* surface){

}

void limas(){
    printf("Pilih limas: (ketik pililhan)\n");
    printf("1. Segitiga\n");
    printf("2. Persegi\n");
    printf("3. Kerucut\n");
    printf("0. Kembali ke menu sebelumnya\n");
    int selection;
    scanf("%d", &selection);
    double volume, surface;
    switch (selection)
    {
    case 1:
        limas_segitiga(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 2:
        limas_persegi(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 3:
        kerucut(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 0:
        bidangtiga();
        break;
    default:
        printf("Input invalid, silahkan coba lagi\n");
        limas();
        break;
    }
}

void bidangtiga(){
//kubus, balok, bola, prisma&tabung, limas, 
}

void trigonometric(){
//sin cos tan csc sec cot
}

void gcd(){
//greatest common divisor, ambil dari matdis
}

void lcm(){
//least common multiple, ambil dari matdis
}

void statistics(){
//average, modus, median, min max, langsung satu input satu output aja
}

void exponents(){
//pangkat, akar, logaritma
}

void converter(){
//temperatur, jarak (imperial to metric vice versa), binary, octal, decimal, hexadecimal
}

void teori_angka(){

}

void permutasi_kombinasi(){
    int pilihOpsi;
    printf("Pilih Permutasi (1) atau Kombinasi (2): \n1. Permutasi\n2. Kombinasi\n0. Kembali ke menu utama\n");
    scanf("%d", &pilihOpsi);
    switch (pilihOpsi)
    {
    case 1:
        permutation();
        break;
    case 2:
        combination();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, silahkan coba lagi.\n");
        permutasi_kombinasi();
        break;
    }
}

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
            int choice;
            printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                convCalc();
                break;
            case 0:
                main_process();
                break;
            default:
                printf("Input invalid, kembali ke menu utama.\n");
                main_process();
                break;
            };
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
            int choice;
            printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                convCalc();
                break;
            case 0:
                main_process();
                break;
            default:
                printf("Input invalid, kembali ke menu utama.\n");
                main_process();
                break;
            };
            break;
        }
    }
}

void factorialCalc(){
    int n;
    printf("Calculate factorial of an integer\n");
    printf("Input integer: ");scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        factorialCalc();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, kembali ke menu utama.");
        main_process();
        break;
    };
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
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        fibonacciCalc();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, kembali ke menu utama.");
        main_process();
        break;
    };
}

void deretCalc(){
    printf("Work In Progress\n");
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deretCalc();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, kembali ke menu utama.");
        main_process();
        break;
    };
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
    printf("5. Bidang Dua\n");
    printf("6. Bidang Tiga\n");
    printf("7. Teori Angka (FPB, KPK, Converter)\n");
    printf("8. Permutasi dan Kombinasi\n");
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
    case 5:
        bidangdua();
        break;
    case 6:
        bidangtiga();
        break;
    case 7:
        teori_angka();
        break;
    case 8:
        permutasi_kombinasi();
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