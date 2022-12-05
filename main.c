#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.141592653589793238
#include <fenv.h>

int main_process();

void bidangtiga();
void bidangdua();

double findSqrt(double x)
{
    double sqrt, temp;
    sqrt = x / 2;
    temp = 0;

    while(sqrt != temp){

        temp = sqrt;
        sqrt = (x/temp + temp) / 2;
    }
    return sqrt;
}

int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int power(int a, int b){  
    int power = 1, i ;  
    for(i = 1 ;i <= b; ++i ){  
        power = power * a ;  
    }  
    return power;  
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

double lingkaran(double* area, double* perimeter, double*radius){
    double r;
    printf("Masukkan radius lingkaran: ");scanf("%lf", &r);
    *area = M_PI*r*r;
    *perimeter = M_PI*2*r;
    *radius =r;
}

double segitiga(double* area, double* perimeter, double* alas, double* tinggi){
    double a, t;
    printf("Masukkan panjang sisi segitiga: ");scanf("%lf", &a);
    printf("Masukkan tinggi segitiga: ");scanf("%lf", &t);
    *area = (a*t)/2;
    *perimeter = a*3;
    *alas = a;
}

double trapezium(double* area, double* perimeter){
    double alas, t, tutup, sisi;
    printf("Masukkan panjang alas trapezium: ");scanf("%lf", &alas);
    printf("Masukkan panjang tutup trapezium: ");scanf("%lf", &tutup);
    printf("Masukkan tinggi trapezium: ");scanf("%lf", &t);
    printf("Masukkan panjang sisi trapezium: ");scanf("%lf", &sisi);
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
    printf("4. Segitiga (Sama Sisi)\n");
    printf("5. Trapezium\n");
    printf("0. Kembali ke menu utama\n");
    scanf("%d", &selection);
    double area, perimeter;
    switch (selection)
    {
    case 1:
        double nullsisi;
        persegi(&area, &perimeter, &nullsisi);
        printf("Luas Persegi: %g\nKeliling Persegi: %g\n", area, perimeter);
        break;
    case 2:
        persegi_panjang(&area, &perimeter);
        printf("Luas Persegi Panjang: %g\nKeliling Persegi Panjang: %g\n", area, perimeter);
        break;
    case 3:
        double nullradius;
        lingkaran(&area, &perimeter, &nullradius);
        printf("Luas Lingkaran: %g\nKeliling Lingkaran: %g\n", area, perimeter);
        break;
    case 4:
        double nullalas, nulltinggi;
        segitiga(&area, &perimeter, &nullalas, &nulltinggi);
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
        printf("Input invalid, kembali ke menu utama.\n");
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
    *volume = 1.33*M_PI*r*r*r;
    *surface = 4*M_PI*r*r;
}

double prisma_segitiga(double* volume, double* surface){
    double area, perimeter, tinggi, nullalas, nulltinggi;
    segitiga(&area, &perimeter, &nullalas, &nulltinggi);
    printf("Masukkan tinggi prisma: ");scanf("%lf", &tinggi);
    *volume = area*tinggi;
    *surface = perimeter*tinggi + 2*area;
}

double tabung(double* volume, double* surface){
    double area, perimeter, tinggi, nullradius;
    lingkaran(&area, &perimeter, &nullradius);
    printf("Masukkan tinggi tabung: ");scanf("%lf", &tinggi);
    *volume = area*tinggi;
    *surface = perimeter*tinggi + 2*area;
}

void prisma(){
    printf("Pilih prisma: (ketik pilihan)\n");
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
    double area, perimeter, tinggi, tinggisisi, sisi, tinggisegitiga;
    segitiga(&area, &perimeter, &sisi, &tinggisegitiga);
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    tinggisisi=findSqrt(0.25*(sisi*sisi)+(tinggisegitiga*tinggisegitiga));
    *volume = 0.33*area*tinggi;
    *surface = area + 3*(0.5*sisi*tinggisisi);
}

double limas_persegi(double* volume, double* surface){
    double area, perimeter, tinggi, sisi;
    persegi(&area, &perimeter, &sisi);
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    double tinggiSisi=findSqrt(tinggi*tinggi+(0.5*sisi)*(0.5*sisi));
    double luasSisi=0.5*tinggiSisi*sisi;
    *volume=0.33*area*tinggi;
    *surface=area+4*luasSisi;
}

double kerucut(double* volume, double* surface){
    double area, perimeter, tinggi, radius;
    lingkaran(&area, &perimeter, &radius);
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    *volume = tinggi/3*area;
    *surface = M_PI*radius*(radius+findSqrt(tinggi*tinggi+radius*radius));
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
    int selection;
    printf("Pilih bidang ruang: (Masukkan angka depan pilihan)\n");
    printf("1. Kubus\n");
    printf("2. Balok\n");
    printf("3. Bola\n");
    printf("4. Prisma\n");
    printf("5. Limas\n");
    printf("0. Kembali ke menu utama\n");
    scanf("%d", &selection);
    double volume, surface;
    switch (selection)
    {
    case 1:
        kubus(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 2:
        balok(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 3:
        bola(&volume, &surface);
        printf("Volume: %g\nLuas Permukaan: %g\n",volume, surface);
        break;
    case 4:
        prisma();
        break;
    case 5:
        limas();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, silahkan coba lagi.\n");
        bidangtiga();
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

void teori_angka();

void gcd(){
    int a, b, r;
    printf("Input integer pertama   : ");scanf("%d", &a);
    printf("Input integer kedua     : ");scanf("%d", &b);
    int a_awal = a;
    int b_awal = b;
    if (a<b)
    {
        int temp=b;
        b=a;
        a=temp;
    } 
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("FPB dari %d dan %d adalah %d\n", a_awal, b_awal, a);
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        gcd();
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

void lcm(){
    int a, x, y;
    printf("Input integer pertama   : ");scanf("%d", &x);
    printf("Input integer kedua     : ");scanf("%d", &y);
    a= (x > y) ? x : y;

    while (1) {
        if ((a % x == 0) && (a % y == 0)) {
            printf("KPK dari %d dan %d adalah %d.\n", x, y, a);
            break;
        }
        ++a;
    }
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        lcm();
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

void exponents(){
//pangkat, akar kuadrat
    printf("Pilih:\n");
    printf("1. Perpangkatan integer\n");
    printf("2. Akar kuadrat\n");
    printf("0. Kembali ke menu sebelumnya\n");
    int selection;
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        int a, b;
        printf("Masukkan bilangan utama: ");scanf("%d", &a);
        printf("Masukkan pangkat: ");scanf("%d", &b);
        printf("%d pangkat %d: %d", a, b, power(a, b));
        break;
    case 2:
        double x;
        printf("Masukkan bilangan yang akan diakar: ");scanf("%lf", &x);
        printf("Akar kuadrat %g: %g\n", x, findSqrt(x));
        break;
    case 0:
        teori_angka();
        break;
    default:
        printf("Input invalid, silahkan coba lagi\n");
        exponents();
        break;
    }
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        exponents();
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

void teori_angka(){
    int selection;
    printf("Pilih opsi: (Masukkan angka depan pilihan)\n");
    printf("1. FPB\n");
    printf("2. KPK\n");
    printf("3. Eksponen\n");
    printf("0. Kembali ke menu utama\n");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        gcd();
        break;
    case 2:
        lcm();
        break;
    case 3:
        exponents();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, silahkan coba lagi.\n");
        teori_angka();
        break;
    }
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
            int hasil=(int)val1%(int)val2;
            result = (double)hasil;
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
        printf("Input invalid, kembali ke menu utama.\n");
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
        printf("Input invalid, kembali ke menu utama.\n");
        main_process();
        break;
    };
}

void deretbaris();

void barisAritmatika(){
    printf("Mencari suku ke-n baris Aritmatika\n");
    double a, n, b;
    printf("Masukkan suku pertama (a): ");scanf("%lf", &a);
    printf("Masukkan banyak suku (n): ");scanf("%lf", &n);
    printf("Masukkan selisih antar suku (b): ");scanf("%lf", &b);
    double un = (a+(n-1)*b);
    printf("Suku ke-%g: %g\n", n, un);
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        barisAritmatika();
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

void barisGeometri(){
    printf("Mencari suku ke-n baris geometri\n");
    double a, n, r;
    printf("Masukkan suku pertama (a): ");scanf("%lf", &a);
    printf("Masukkan banyak suku (n): ");scanf("%lf", &n);
    printf("Masukkan rasio (r): ");scanf("%lf", &r);
    double un = a * (power(r, n-1));
    printf("Suku ke-%g: %g\n", n, un);
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        barisGeometri();
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

void barisCalc(){
    printf("Pilih:\n");
    printf("1. Baris Aritmatika\n");
    printf("2. Baris Geometri\n");
    printf("0. Kembali ke menu sebelumnya\n");
    int selection;
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        barisAritmatika();
        break;
    case 2:
        barisGeometri();
        break;
    case 0:
        deretbaris();
        break;
    default:
        printf("Input invalid, silahkan coba lagi\n");
        barisCalc();
        break;
    }
}

void deretAritmatika(){
    printf("Mencari jumlah n suku pertama deret aritmatika\n");
    double a, n, b;
    printf("Masukkan suku pertama (a): ");scanf("%lf", &a);
    printf("Masukkan banyak suku (n): ");scanf("%lf", &n);
    printf("Masukkan selisih antar suku (b): ");scanf("%lf", &b);
    double sn = (n*(2*a+(n-1)*b))/2;
    printf("Jumlah %g suku pertama: %g\n", n, sn);
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deretAritmatika();
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

void deretGeometri(){
    printf("Mencari jumlah n suku pertama deret geometri\n");
    double a, n, r;
    printf("Masukkan suku pertama (a): ");scanf("%lf", &a);
    printf("Masukkan banyak suku (n): ");scanf("%lf", &n);
    printf("Masukkan rasio (r): ");scanf("%lf", &r);
    double sn = (a*(1-power(r, n)))/(1-r);
    printf("Jumlah %g suku pertama: %g\n", n, sn);
    int choice;
    printf("Ketik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        deretGeometri();
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

void deretCalc(){
    printf("Work In Progress\n");
    printf("Pilih:\n");
    printf("1. Deret Aritmatika\n");
    printf("2. Deret Geometri\n");
    printf("0. Kembali ke menu sebelumnya\n");
    int selection;
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        deretAritmatika();
        break;
    case 2:
        deretGeometri();
        break;
    case 0:
        deretbaris();
        break;
    default:
        printf("Input invalid, silahkan coba lagi\n");
        deretCalc();
        break;
    }
}

void deretbaris(){
    printf("Pilih:\n");
    printf("1. Baris\n");
    printf("2. Deret\n");
    printf("0. Kembali ke menu sebelumnya\n");
    int selection;
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        barisCalc();
        break;
    case 2:
        deretCalc();
        break;
    case 0:
        main_process();
        break;
    default:
        printf("Input invalid, silahkan coba lagi\n");
        deretbaris();
        break;
    }
}

int main_process(){
    printf("\n\n");
    printf("=====================[ CALCULATOR DEWA ]===================\n");
    printf("=====Samuel Maximus Lamere=====Bonifasius Martin============\n\n");
    
    printf("Pilih Salah Satu Opsi Berikut: (Ketikkan Angka Depan Opsi)\n");
    printf("1. Kalkulator Konvensional (Tambah Kurang Kali Bagi Modulus)\n");
    printf("2. Faktorial (Input 1 angka untuk mendapatkan faktorialnya.)\n");
    printf("3. Kalkulator baris/deret aritmatika/geometri.\n");
    printf("4. Print angka fibonacci ke-n\n");
    printf("5. Bidang Dua\n");
    printf("6. Bidang Tiga\n");
    printf("7. Teori Angka (FPB, KPK, Pangkat)\n");
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
        deretbaris();
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