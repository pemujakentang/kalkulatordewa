#include <stdio.h>
#include <stdlib.h>

void merah_background_item()
{
    printf("\033[38;5;196;48;5;232m");
}

void hijau_background_item()
{
    printf("\033[38;5;46;48;5;232m");
}

void kuning_background_item()
{
    printf("\033[38;5;226;48;5;232m");
}

void biru_background_item()
{
    printf("\033[38;5;27;48;5;232m");
}

void ungu_background_item()
{
    printf("\033[38;5;129;48;5;232m");
}

void oren_background_item()
{
    printf("\033[38;5;208;48;5;232m");
}

void oren()
{
    printf("\033[38;5;208m");
}

void merah()
{
    printf("\033[38;5;9m");
}

void putih()
{
    printf("\033[38;5;231m");
}
void reset()
{
    printf("\033[\e[0m");
}

void main()
{
    putih();
    printf("==========================================================================================================================================\n");
    printf("||");
    merah_background_item();
    printf(" ___   _  _______  ___      ___   _  __   __  ___      _______  _______  _______  ______           ______   _______  _     _  _______ ");
    reset();
    putih();
    printf("||\n");
    printf("||");
    merah_background_item();
    printf("|   | | ||   _   ||   |    |   | | ||  | |  ||   |    |   _   ||       ||       ||    _ |         |      | |       || | _ | ||   _   |");
    reset();
    putih();
    printf("||\n");
    printf("||");
    oren_background_item();
    printf("|   |_| ||  |_|  ||   |    |   |_| ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||         |  _    ||    ___|| || || ||  |_|  |");
    reset();
    putih();
    printf("||\n");
    printf("||");
    kuning_background_item();
    printf("|      _||       ||   |    |      _||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_        | | |   ||   |___ |       ||       |");
    reset();
    putih();
    printf("||\n");
    printf("||");
    hijau_background_item();
    printf("|     |_ |       ||   |___ |     |_ |       ||   |___ |       |  |   |  |  |_|  ||    __  |       | |_|   ||    ___||       ||       |");
    reset();
    putih();
    printf("||\n");
    printf("||");
    biru_background_item();
    printf("|    _  ||   _   ||       ||    _  ||       ||       ||   _   |  |   |  |       ||   |  | |       |       ||   |___ |   _   ||   _   |");
    reset();
    putih();
    printf("||\n");
    printf("||");
    ungu_background_item();
    printf("|___| |_||__| |__||_______||___| |_||_______||_______||__| |__|  |___|  |_______||___|  |_|       |______| |_______||__| |__||__| |__|");
    reset();
    putih();
    printf("||\n");
    printf("==========================================================================================================================================\n\n");
    reset();
    merah();
    printf("________________________");oren();printf("Samuel Maximus Lamere");merah();printf("____________________________________________");oren();printf("Bonifasius Martin");merah();printf("________________________________\n\n");
    putih();
    printf("Pilih Salah Satu Opsi Berikut: ");merah();printf("(Ketikkan Angka Depan Opsi)\n");putih();
    printf("1. Kalkulator Konvensional");merah();printf("(Tambah Kurang Kali Bagi Modulus)\n");putih();
    printf("2. Faktorial ");merah();printf("(Input 1 angka untuk mendapatkan faktorialnya.)\n");putih();
    printf("3. Kalkulator deret aritmatika/geometri.\n");
    printf("4. Print angka fibonacci ke-n\n");
    printf("5. Bidang Dua\n");
    printf("6. Bidang Tiga\n");
    printf("7. Teori Angka ");merah();printf("(FPB, KPK, Converter)\n");putih();
    printf("8. Permutasi dan Kombinasi\n");
    printf("9. Help\n");
    printf("0. Exit\n");
    reset();
    
}