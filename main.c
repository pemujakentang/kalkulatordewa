#include <stdio.h>
#include <stdlib.h>
#define M_PI 3.141592653589793238
#include <fenv.h>

int main_process();

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

void biru()
{
    printf("\033[38;5;81m");
}

void oren()
{
    printf("\033[38;5;208m");
}

void merah()
{
    printf("\033[38;5;196m");
}

void putih()
{
    printf("\033[38;5;231m");
}

void gradasi_warna_1_1()
{
    printf("\033[38;5;196;48;5;232m");
}

void gradasi_warna_1_2()
{
    printf("\033[38;5;197;48;5;232m");
}

void gradasi_warna_1_3()
{
    printf("\033[38;5;198;48;5;232m");
}

void gradasi_warna_1_4()
{
    printf("\033[38;5;199;48;5;232m");
}

void gradasi_warna_1_5()
{
    printf("\033[38;5;200;48;5;232m");
}

void gradasi_warna_1_6()
{
    printf("\033[38;5;201;48;5;232m");
}

void gradasi_warna_2_1()
{
    printf("\033[38;5;172;48;5;232m");
}

void gradasi_warna_2_2()
{
    printf("\033[38;5;173;48;5;232m");
}

void gradasi_warna_2_3()
{
    printf("\033[38;5;174;48;5;232m");
}

void gradasi_warna_2_4()
{
    printf("\033[38;5;175;48;5;232m");
}

void gradasi_warna_2_5()
{
    printf("\033[38;5;176;48;5;232m");
}

void gradasi_warna_2_6()
{
    printf("\033[38;5;177;48;5;232m");
}

void gradasi_warna_3_1()
{
    printf("\033[38;5;82;48;5;232m");
}

void gradasi_warna_3_2()
{
    printf("\033[38;5;83;48;5;232m");
}

void gradasi_warna_3_3()
{
    printf("\033[38;5;84;48;5;232m");
}

void gradasi_warna_3_4()
{
    printf("\033[38;5;85;48;5;232m");
}

void gradasi_warna_3_5()
{
    printf("\033[38;5;86;48;5;232m");
}

void gradasi_warna_3_6()
{
    printf("\033[38;5;87;48;5;232m");
}

void gradasi_warna_4_1()
{
    printf("\033[38;5;208;48;5;232m");
}

void gradasi_warna_4_2()
{
    printf("\033[38;5;209;48;5;232m");
}

void gradasi_warna_4_3()
{
    printf("\033[38;5;210;48;5;232m");
}

void gradasi_warna_4_4()
{
    printf("\033[38;5;211;48;5;232m");
}

void gradasi_warna_4_5()
{
    printf("\033[38;5;212;48;5;232m");
}

void gradasi_warna_4_6()
{
    printf("\033[38;5;213;48;5;232m");
}

void gradasi_warna_5_1()
{
    printf("\033[38;5;136;48;5;232m");
}

void gradasi_warna_5_2()
{
    printf("\033[38;5;137;48;5;232m");
}

void gradasi_warna_5_3()
{
    printf("\033[38;5;138;48;5;232m");
}

void gradasi_warna_5_4()
{
    printf("\033[38;5;139;48;5;232m");
}

void gradasi_warna_5_5()
{
    printf("\033[38;5;140;48;5;232m");
}

void gradasi_warna_5_6()
{
    printf("\033[38;5;141;48;5;232m");
}

void gradasi_warna_6_1()
{
    printf("\033[38;5;226;48;5;232m");
}

void gradasi_warna_6_2()
{
    printf("\033[38;5;227;48;5;232m");
}

void gradasi_warna_6_3()
{
    printf("\033[38;5;228;48;5;232m");
}

void gradasi_warna_6_4()
{
    printf("\033[38;5;229;48;5;232m");
}

void gradasi_warna_6_5()
{
    printf("\033[38;5;230;48;5;232m");
}

void gradasi_warna_6_6()
{
    printf("\033[38;5;231;48;5;232m");
}

void reset()
{
    printf("\033[\e[0m");
}

void main_menu_design()
{
    system("cls");
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
    printf("===========================");
    oren();
    printf("Samuel Maximus Lamere");
    biru();
    printf("____Jawaban Yang Anda Cari Ada Disini____");
    oren();
    printf("Bonifasius Martin");
    merah();
    printf("================================\n\n");
    putih();
    printf("Pilih Salah Satu Opsi Berikut: ");
    merah();
    printf("(Ketikkan Angka Depan Opsi)\n");
    putih();
    printf("1. Kalkulator Konvensional");
    merah();
    printf("(Tambah Kurang Kali Bagi Modulus)\n");
    putih();
    printf("2. Faktorial ");
    merah();
    printf("(Input 1 angka untuk mendapatkan faktorialnya.)\n");
    putih();
    printf("3. Kalkulator deret/baris aritmatika/geometri.\n");
    printf("4. Print angka fibonacci ke-n\n");
    printf("5. Bidang Dua\n");
    printf("6. Bidang Tiga\n");
    printf("7. Teori Angka ");
    merah();
    printf("(FPB, KPK, Eksponen)\n");
    putih();
    printf("8. Permutasi dan Kombinasi\n");
    printf("0. Exit\n");
    reset();
}

void kalkulator_konvensional_design()
{
    system("cls");
    putih();
    printf("=================================================================================================================\n");
    printf("||");
    gradasi_warna_1_1();
    printf("        ___   _  _______  ___      ___   _  __   __  ___      _______  _______  _______  ______        ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_1();
    printf("       |   | | ||   _   ||   |    |   | | ||  | |  ||   |    |   _   ||       ||       ||    _ |       ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_2();
    printf("       |   |_| ||  |_|  ||   |    |   |_| ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||       ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_3();
    printf("       |      _||       ||   |    |      _||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_      ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_4();
    printf("       |     |_ |       ||   |___ |     |_ |       ||   |___ |       |  |   |  |  |_|  ||    __  |     ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_5();
    printf("       |    _  ||   _   ||       ||    _  ||       ||       ||   _   |  |   |  |       ||   |  | |     ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_6();
    printf("       |___| |_||__| |__||_______||___| |_||_______||_______||__| |__|  |___|  |_______||___|  |_|     ");
    putih();
    printf("      ||\n");
    printf("||");
    gradasi_warna_1_6();
    printf("   ___   _  _______  __    _  __   __  _______  __    _  _______  ___   _______  __    _  _______  ___     ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_6();
    printf("  |   | | ||       ||  |  | ||  | |  ||       ||  |  | ||       ||   | |       ||  |  | ||   _   ||   |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_5();
    printf("  |   |_| ||   _   ||   |_| ||  |_|  ||    ___||   |_| ||  _____||   | |   _   ||   |_| ||  |_|  ||   |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_4();
    printf("  |      _||  | |  ||       ||       ||   |___ |       || |_____ |   | |  | |  ||       ||       ||   |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_3();
    printf("  |     |_ |  |_|  ||  _    ||       ||    ___||  _    ||_____  ||   | |  |_|  ||  _    ||       ||   |___ ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_2();
    printf("  |    _  ||       || | |   | |     | |   |___ | | |   | _____| ||   | |       || | |   ||   _   ||       |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_1();
    printf("  |___| |_||_______||_|  |__|  |___|  |_______||_|  |__||_______||___| |_______||_|  |__||__| |__||_______|");
    putih();
    printf("  ||\n");
    printf("||                                                                                                             ||\n");
    printf("=================================================================================================================\n");
    reset();
}

void pangkat_design()
{
    system("cls");
    putih();
    printf("==========================================================================\n");
    printf("||");
    gradasi_warna_6_1();
    printf("  _______  _______  __    _  _______  ___   _  _______  _______    ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf(" |       ||   _   ||  |  | ||       ||   | | ||   _   ||       |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf(" |    _  ||  |_|  ||   |_| ||    ___||   |_| ||  |_|  ||_     _|    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf(" |   |_| ||       ||       ||   | __ |      _||       |  |   |      ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf(" |    ___||       ||  _    ||   ||  ||     |_ |       |  |   |      ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf(" |   |    |   _   || | |   ||   |_| ||    _  ||   _   |  |   |      ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf(" |___|    |__| |__||_|  |__||_______||___| |_||__| |__|  |___|      ");
    putih();
    printf("  ||\n");
    printf("||                                                                      ||\n");
    printf("==========================================================================\n");
    reset();
}

void faktorial_design()
{
    system("cls");
    putih();
    printf("=======================================================================================\n");
    printf("||");
    gradasi_warna_2_1();
    printf("   _______  _______  ___   _  _______  _______  ______    ___   _______  ___    ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_1();
    printf("  |       ||   _   ||   | | ||       ||       ||    _ |  |   | |   _   ||   |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_2();
    printf("  |    ___||  |_|  ||   |_| ||_     _||   _   ||   | ||  |   | |  |_|  ||   |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_3();
    printf("  |   |___ |       ||      _|  |   |  |  | |  ||   |_||_ |   | |       ||   |    ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_4();
    printf("  |    ___||       ||     |_   |   |  |  |_|  ||    __  ||   | |       ||   |___ ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_5();
    printf("  |   |    |   _   ||    _  |  |   |  |       ||   |  | ||   | |   _   ||       |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_6();
    printf("  |___|    |__| |__||___| |_|  |___|  |_______||___|  |_||___| |__| |__||_______|");
    putih();
    printf("  ||\n");
    printf("||                                                                                   ||\n");
    printf("=======================================================================================\n");
    reset();
}

void fibonacci_design()
{
    system("cls");
    putih();
    printf("=================================================================================\n");
    printf("||");
    gradasi_warna_3_1();
    printf("   _______  ___   _______  _______  __    _  _______  _______  _______  ___ ");
    putih();
    printf(" ||\n");
    printf("||");
    gradasi_warna_3_1();
    printf("  |       ||   | |  _    ||       ||  |  | ||   _   ||       ||       ||   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_2();
    printf("  |    ___||   | | |_|   ||   _   ||   |_| ||  |_|  ||      _||      _||   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_3();
    printf("  |   |___ |   | |       ||  | |  ||       ||       ||     |  |     |  |   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_4();
    printf("  |    ___||   | |  _   | |  |_|  ||  _    ||       ||     |  |     |  |   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_5();
    printf("  |   |    |   | | |_|   ||       || | |   ||   _   ||     |_ |     |_ |   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_6();
    printf("  |___|    |___| |_______||_______||_|  |__||__| |__||_______||_______||___| ");
    putih();
    printf("||\n");
    printf("||                                                                             ||\n");
    printf("=================================================================================\n");
    reset();
}

void bidang_dua_design()
{
    system("cls");
    putih();
    printf("==========================================================================================\n");
    printf("||");
    gradasi_warna_4_1();
    printf("   _______  ___   ______   _______  __    _  _______      ______   __   __  _______  ");
    putih();
    printf(" ||\n");
    printf("||");
    gradasi_warna_4_1();
    printf("  |  _    ||   | |      | |   _   ||  |  | ||       |    |      | |  | |  ||   _   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_2();
    printf("  | |_|   ||   | |  _    ||  |_|  ||   |_| ||    ___|    |  _    ||  | |  ||  |_|  |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_3();
    printf("  |       ||   | | | |   ||       ||       ||   | __     | | |   ||  |_|  ||       |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_4();
    printf("  |  _   | |   | | |_|   ||       ||  _    ||   ||  |    | |_|   ||       ||       |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_5();
    printf("  | |_|   ||   | |       ||   _   || | |   ||   |_| |    |       ||       ||   _   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_6();
    printf("  |_______||___| |______| |__| |__||_|  |__||_______|    |______| |_______||__| |__|  ");
    putih();
    printf("||\n");
    printf("||                                                                                      ||\n");
    printf("==========================================================================================\n");
    reset();
}

void persegi_design()
{
    system("cls");
    putih();
    printf("=====================================================================\n");
    printf("||");
    gradasi_warna_1_1();
    printf("  _______  _______  ______    _______  _______  _______  ___  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_1();
    printf(" |       ||       ||    _ |  |       ||       ||       ||   |  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_2();
    printf(" |    _  ||    ___||   | ||  |  _____||    ___||    ___||   |  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_3();
    printf(" |   |_| ||   |___ |   |_||_ | |_____ |   |___ |   | __ |   |  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_4();
    printf(" |    ___||    ___||    __  ||_____  ||    ___||   ||  ||   |  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_5();
    printf(" |   |    |   |___ |   |  | | _____| ||   |___ |   |_| ||   |  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_1_6();
    printf(" |___|    |_______||___|  |_||_______||_______||_______||___|  ");
    putih();
    printf("  ||\n");
    printf("||                                                                 ||\n");
    printf("=====================================================================\n");
    reset();
}

void persegi_panjang_design()
{
    system("cls");
    putih();
    printf("=====================================================================================================================================\n");
    printf("||");
    gradasi_warna_2_1();
    printf("  _______  _______  ______    _______  _______  _______  ___     _______  _______  __    _      ___  _______  __    _  _______");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_1();
    printf(" |       ||       ||    _ |  |       ||       ||       ||   |   |       ||   _   ||  |  | |    |   ||   _   ||  |  | ||       |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_2();
    printf(" |    _  ||    ___||   | ||  |  _____||    ___||    ___||   |   |    _  ||  |_|  ||   |_| |    |   ||  |_|  ||   |_| ||    ___|");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_3();
    printf(" |   |_| ||   |___ |   |_||_ | |_____ |   |___ |   | __ |   |   |   |_| ||       ||       |    |   ||       ||       ||   | __ ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_4();
    printf(" |    ___||    ___||    __  ||_____  ||    ___||   ||  ||   |   |    ___||       ||  _    | ___|   ||       ||  _    ||   ||  |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_5();
    printf(" |   |    |   |___ |   |  | | _____| ||   |___ |   |_| ||   |   |   |    |   _   || | |   ||       ||   _   || | |   ||   |_| |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_6();
    printf(" |___|    |_______||___|  |_||_______||_______||_______||___|   |___|    |__| |__||_|  |__||_______||__| |__||_|  |__||_______|");
    putih();
    printf("  ||\n");
    printf("||                                                                                                                                 ||\n");
    printf("=====================================================================================================================================\n");
    reset();
}

void lingkaran_design()
{
    system("cls");
    putih();
    printf("=======================================================================================\n");
    printf("||");
    gradasi_warna_2_1();
    printf("  ___      ___   __    _  _______  ___   _  _______  ______    _______  __    _ ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_1();
    printf(" |   |    |   | |  |  | ||       ||   | | ||   _   ||    _ |  |   _   ||  |  | | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_2();
    printf(" |   |    |   | |   |_| ||    ___||   |_| ||  |_|  ||   | ||  |  |_|  ||   |_| | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_3();
    printf(" |   |    |   | |       ||   | __ |      _||       ||   |_||_ |       ||       | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_4();
    printf(" |   |___ |   | |  _    ||   ||  ||     |_ |       ||    __  ||       ||  _    | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_5();
    printf(" |       ||   | | | |   ||   |_| ||    _  ||   _   ||   |  | ||   _   || | |   | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_6();
    printf(" |_______||___| |_|  |__||_______||___| |_||__| |__||___|  |_||__| |__||_|  |__| ");
    putih();
    printf("  ||\n");
    printf("||                                                                                   ||\n");
    printf("=======================================================================================\n");
    reset();
}

void segitiga_design()
{
    system("cls");
    putih();
    printf("==========================================================================\n");
    printf("||");
    gradasi_warna_3_1();
    printf("  _______  _______  _______  ___   _______  ___   _______  _______ ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_1();
    printf(" |       ||       ||       ||   | |       ||   | |       ||   _   | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_3_2();
    printf(" |  _____||    ___||    ___||   | |_     _||   | |    ___||  |_|  | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_3_3();
    printf(" | |_____ |   |___ |   | __ |   |   |   |  |   | |   | __ |       | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_3_4();
    printf(" |_____  ||    ___||   ||  ||   |   |   |  |   | |   ||  ||       | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_3_5();
    printf("  _____| ||   |___ |   |_| ||   |   |   |  |   | |   |_| ||   _   | ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_3_6();
    printf(" |_______||_______||_______||___|   |___|  |___| |_______||__| |__| ");
    putih();
    printf("  ||\n");
    printf("||                                                                      ||\n");
    printf("==========================================================================\n");
    reset();
}

void trapesium_design()
{
    system("cls");
    putih();
    printf("======================================================================================\n");
    printf("||");
    gradasi_warna_4_1();
    printf("  _______  ______    _______  _______  _______  _______  ___   __   __  __   __");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_4_1();
    printf(" |       ||    _ |  |   _   ||       ||       ||       ||   | |  | |  ||  |_|  |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_4_2();
    printf(" |_     _||   | ||  |  |_|  ||    _  ||    ___||  _____||   | |  | |  ||       |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_4_3();
    printf("   |   |  |   |_||_ |       ||   |_| ||   |___ | |_____ |   | |  |_|  ||       |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_4_4();
    printf("   |   |  |    __  ||       ||    ___||    ___||_____  ||   | |       ||       |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_4_5();
    printf("   |   |  |   |  | ||   _   ||   |    |   |___  _____| ||   | |       || ||_|| |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_4_6();
    printf("   |___|  |___|  |_||__| |__||___|    |_______||_______||___| |_______||_|   |_|");
    putih();
    printf("  ||\n");
    printf("||                                                                                  ||\n");
    printf("======================================================================================\n");
    reset();
}

void bidang_tiga_design()
{
    system("cls");
    putih();
    printf("================================================================================================\n");
    printf("||");
    gradasi_warna_5_1();
    printf("   _______  ___   ______   _______  __    _  _______      _______  ___   _______  _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_1();
    printf("  |  _    ||   | |      | |   _   ||  |  | ||       |    |       ||   | |       ||   _   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_2();
    printf("  | |_|   ||   | |  _    ||  |_|  ||   |_| ||    ___|    |_     _||   | |    ___||  |_|  |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_3();
    printf("  |       ||   | | | |   ||       ||       ||   | __       |   |  |   | |   | __ |       |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_4();
    printf("  |  _   | |   | | |_|   ||       ||  _    ||   ||  |      |   |  |   | |   ||  ||       |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_5();
    printf("  | |_|   ||   | |       ||   _   || | |   ||   |_| |      |   |  |   | |   |_| ||   _   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_6();
    printf("  |_______||___| |______| |__| |__||_|  |__||_______|      |___|  |___| |_______||__| |__|  ");
    putih();
    printf("||\n");
    printf("||                                                                                            ||\n");
    printf("================================================================================================\n");
    reset();
}

void kubus_design()
{
    system("cls");
    putih();
    printf("===================================================\n");
    printf("||");
    gradasi_warna_5_1();
    printf("  ___   _  __   __  _______  __   __  _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_1();
    printf(" |   | | ||  | |  ||  _    ||  | |  ||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_2();
    printf(" |   |_| ||  | |  || |_|   ||  | |  ||  _____| ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_3();
    printf(" |      _||  |_|  ||       ||  |_|  || |_____  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_4();
    printf(" |     |_ |       ||  _   | |       ||_____  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_5();
    printf(" |    _  ||       || |_|   ||       | _____| | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_6();
    printf(" |___| |_||_______||_______||_______||_______| ");
    putih();
    printf("||\n");
    printf("||                                               ||\n");
    printf("===================================================\n");
    reset();
}

void balok_design()
{
    system("cls");
    putih();
    printf("===================================================\n");
    printf("||");
    gradasi_warna_6_1();
    printf("  _______  _______  ___      _______  ___   _  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_1();
    printf(" |  _    ||   _   ||   |    |       ||   | | | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_2();
    printf(" | |_|   ||  |_|  ||   |    |   _   ||   |_| | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_3();
    printf(" |       ||       ||   |    |  | |  ||      _| ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_4();
    printf(" |  _   | |       ||   |___ |  |_|  ||     |_  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_5();
    printf(" | |_|   ||   _   ||       ||       ||    _  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_6();
    printf(" |_______||__| |__||_______||_______||___| |_| ");
    putih();
    printf("||\n");
    printf("||                                               ||\n");
    printf("===================================================\n");
    reset();
}

void bola_design()
{
    system("cls");
    putih();
    printf("==========================================\n");
    printf("||");
    gradasi_warna_1_1();
    printf("  _______  _______  ___      _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_1_1();
    printf(" |  _    ||       ||   |    |   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_1_2();
    printf(" | |_|   ||   _   ||   |    |  |_|  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_1_3();
    printf(" |       ||  | |  ||   |    |       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_1_4();
    printf(" |  _   | |  |_|  ||   |___ |       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_1_5();
    printf(" | |_|   ||       ||       ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_1_6();
    printf(" |_______||_______||_______||__| |__| ");
    putih();
    printf("||\n");
    printf("||                                      ||\n");
    printf("==========================================\n");
    reset();
}

void prisma_segitiga_design()
{
    system("cls");
    putih();
    printf("================================================================================================================================\n");
    printf("||");
    gradasi_warna_2_1();
    printf("  _______  ______    ___   _______  __   __  _______      _______  _______  _______  ___   _______  ___   _______  _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_2_1();
    printf(" |       ||    _ |  |   | |       ||  |_|  ||   _   |    |       ||       ||       ||   | |       ||   | |       ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_2_2();
    printf(" |    _  ||   | ||  |   | |  _____||       ||  |_|  |    |  _____||    ___||    ___||   | |_     _||   | |    ___||  |_|  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_2_3();
    printf(" |   |_| ||   |_||_ |   | | |_____ |       ||       |    | |_____ |   |___ |   | __ |   |   |   |  |   | |   | __ |       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_2_4();
    printf(" |    ___||    __  ||   | |_____  ||       ||       |    |_____  ||    ___||   ||  ||   |   |   |  |   | |   ||  ||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_2_5();
    printf(" |   |    |   |  | ||   |  _____| || ||_|| ||   _   |     _____| ||   |___ |   |_| ||   |   |   |  |   | |   |_| ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_2_6();
    printf(" |___|    |___|  |_||___| |_______||_|   |_||__| |__|    |_______||_______||_______||___|   |___|  |___| |_______||__| |__| ");
    putih();
    printf("||\n");
    printf("||                                                                                                                            ||\n");
    printf("================================================================================================================================\n");
    reset();
}

void tabung_design()
{
    system("cls");
    putih();
    printf("============================================================\n");
    printf("||");
    gradasi_warna_3_1();
    printf("  _______  _______  _______  __   __  __    _  _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_1();
    printf(" |       ||   _   ||  _    ||  | |  ||  |  | ||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_2();
    printf(" |_     _||  |_|  || |_|   ||  | |  ||   |_| ||    ___| ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_3();
    printf("   |   |  |       ||       ||  |_|  ||       ||   | __  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_4();
    printf("   |   |  |       ||  _   | |       ||  _    ||   ||  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_5();
    printf("   |   |  |   _   || |_|   ||       || | |   ||   |_| | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_6();
    printf("   |___|  |__| |__||_______||_______||_|  |__||_______| ");
    putih();
    printf("||\n");
    printf("||                                                        ||\n");
    printf("============================================================\n");
    reset();
}

void limas_design()
{
    system("cls");
    putih();
    printf("================================================\n");
    printf("||");
    gradasi_warna_4_1();
    printf("  ___      ___   __   __  _______  _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_1();
    printf(" |   |    |   | |  |_|  ||   _   ||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_2();
    printf(" |   |    |   | |       ||  |_|  ||  _____| ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_3();
    printf(" |   |    |   | |       ||       || |_____  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_4();
    printf(" |   |___ |   | |       ||       ||_____  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_5();
    printf(" |       ||   | | ||_|| ||   _   | _____| | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_6();
    printf(" |_______||___| |_|   |_||__| |__||_______| ");
    putih();
    printf("||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    reset();
}

void limas_segitiga_design()
{
    system("cls");
    putih();
    printf("======================================================================================================================\n");
    printf("||");
    gradasi_warna_5_1();
    printf("   ___      ___   __   __  _______  _______      _______  _______  _______  ___   _______  ___   _______  _______ ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_1();
    printf(" |   |    |   | |  |_|  ||   _   ||       |    |       ||       ||       ||   | |       ||   | |       ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_2();
    printf(" |   |    |   | |       ||  |_|  ||  _____|    |  _____||    ___||    ___||   | |_     _||   | |    ___||  |_|  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_3();
    printf(" |   |    |   | |       ||       || |_____     | |_____ |   |___ |   | __ |   |   |   |  |   | |   | __ |       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_4();
    printf(" |   |___ |   | |       ||       ||_____  |    |_____  ||    ___||   ||  ||   |   |   |  |   | |   ||  ||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_5();
    printf(" |       ||   | | ||_|| ||   _   | _____| |     _____| ||   |___ |   |_| ||   |   |   |  |   | |   |_| ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_5_6();
    printf(" |_______||___| |_|   |_||__| |__||_______|    |_______||_______||_______||___|   |___|  |___| |_______||__| |__| ");
    putih();
    printf("||\n");
    printf("||                                                                                                                  ||\n");
    printf("======================================================================================================================\n");
    reset();
}

void limas_persegi_design()
{
    system("cls");
    putih();
    printf("=================================================================================================================\n");
    printf("||");
    gradasi_warna_6_1();
    printf("  ___      ___   __   __  _______  _______      _______  _______  ______    _______  _______  _______  ___   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_1();
    printf(" |   |    |   | |  |_|  ||   _   ||       |    |       ||       ||    _ |  |       ||       ||       ||   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_2();
    printf(" |   |    |   | |       ||  |_|  ||  _____|    |    _  ||    ___||   | ||  |  _____||    ___||    ___||   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_3();
    printf(" |   |    |   | |       ||       || |_____     |   |_| ||   |___ |   |_||_ | |_____ |   |___ |   | __ |   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_4();
    printf(" |   |___ |   | |       ||       ||_____  |    |    ___||    ___||    __  ||_____  ||    ___||   ||  ||   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_5();
    printf(" |       ||   | | ||_|| ||   _   | _____| |    |   |    |   |___ |   |  | | _____| ||   |___ |   |_| ||   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_6();
    printf(" |_______||___| |_|   |_||__| |__||_______|    |___|    |_______||___|  |_||_______||_______||_______||___|  ");
    putih();
    printf("||\n");
    printf("||                                                                                                             ||\n");
    printf("=================================================================================================================\n");
    reset();
}

void limas_kerucut_design()
{
    system("cls");
    putih();
    printf("====================================================================================================================\n");
    printf("||");
    gradasi_warna_6_6();
    printf("  ___      ___   __   __  _______  _______      ___   _  _______  ______    __   __  _______  __   __  _______  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_6();
    printf(" |   |    |   | |  |_|  ||   _   ||       |    |   | | ||       ||    _ |  |  | |  ||       ||  | |  ||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_5();
    printf(" |   |    |   | |       ||  |_|  ||  _____|    |   |_| ||    ___||   | ||  |  | |  ||      _||  | |  ||_     _| ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_4();
    printf(" |   |    |   | |       ||       || |_____     |      _||   |___ |   |_||_ |  |_|  ||     |  |  |_|  |  |   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_3();
    printf(" |   |___ |   | |       ||       ||_____  |    |     |_ |    ___||    __  ||       ||     |  |       |  |   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_2();
    printf(" |       ||   | | ||_|| ||   _   | _____| |    |    _  ||   |___ |   |  | ||       ||     |_ |       |  |   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_6_1();
    printf(" |_______||___| |_|   |_||__| |__||_______|    |___| |_||_______||___|  |_||_______||_______||_______|  |___|   ");
    putih();
    printf("||\n");
    printf("||                                                                                                                ||\n");
    printf("====================================================================================================================\n");
    reset();
}

void aritmatika_dan_geometri_design()
{
    system("cls");
    putih();
    printf("================================================================================================\n");
    printf("||");
    gradasi_warna_6_1();
    printf("   _______  ______    ___   _______  __   __  _______  _______  ___   ___   _  _______   ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("  |   _   ||    _ |  |   | |       ||  |_|  ||   _   ||       ||   | |   | | ||   _   |  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf("  |  |_|  ||   | ||  |   | |_     _||       ||  |_|  ||_     _||   | |   |_| ||  |_|  |  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf("  |       ||   |_||_ |   |   |   |  |       ||       |  |   |  |   | |      _||       |  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf("  |       ||    __  ||   |   |   |  |       ||       |  |   |  |   | |     |_ |       |  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf("  |   _   ||   |  | ||   |   |   |  | ||_|| ||   _   |  |   |  |   | |    _  ||   _   |  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("  |__| |__||___|  |_||___|   |___|  |_|   |_||__| |__|  |___|  |___| |___| |_||__| |__|  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("                                ______   _______  __    _ ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("                               |      | |   _   ||  |  | |");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf("                               |  _    ||  |_|  ||   |_| |");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf("                               | | |   ||       ||       |");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf("                               | |_|   ||       ||  _    |");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf("                               |       ||   _   || | |   |");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("                               |______| |__| |__||_|  |__|");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("            _______  _______  _______  __   __  _______  _______  ______    ___  ");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("           |       ||       ||       ||  |_|  ||       ||       ||    _ |  |   | ");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf("           |    ___||    ___||   _   ||       ||    ___||_     _||   | ||  |   | ");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf("           |   | __ |   |___ |  | |  ||       ||   |___   |   |  |   |_||_ |   | ");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf("           |   ||  ||    ___||  |_|  ||       ||    ___|  |   |  |    __  ||   | ");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf("           |   |_| ||   |___ |       || ||_|| ||   |___   |   |  |   |  | ||   | ");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("           |_______||_______||_______||_|   |_||_______|  |___|  |___|  |_||___| ");
    putih();
    printf("           ||\n");
    printf("||                                                                                            ||\n");
    printf("================================================================================================\n");
    reset();
}

void aritmatika_design()
{
    system("cls");
    putih();
    printf("===========================================================================================\n");
    printf("||");
    gradasi_warna_3_1();
    printf("  _______  ______    ___   _______  __   __  _______  _______  ___   ___   _  _______ ");
    putih();
    printf(" ||\n");
    printf("||");
    gradasi_warna_3_1();
    printf(" |   _   ||    _ |  |   | |       ||  |_|  ||   _   ||       ||   | |   | | ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_2();
    printf(" |  |_|  ||   | ||  |   | |_     _||       ||  |_|  ||_     _||   | |   |_| ||  |_|  | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_3();
    printf(" |       ||   |_||_ |   |   |   |  |       ||       |  |   |  |   | |      _||       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_4();
    printf(" |       ||    __  ||   |   |   |  |       ||       |  |   |  |   | |     |_ |       | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_5();
    printf(" |   _   ||   |  | ||   |   |   |  | ||_|| ||   _   |  |   |  |   | |    _  ||   _   | ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_6();
    printf(" |__| |__||___|  |_||___|   |___|  |_|   |_||__| |__|  |___|  |___| |___| |_||__| |__| ");
    putih();
    printf("||\n");
    printf("||                                                                                       ||\n");
    printf("===========================================================================================\n");
    reset();
}

void geometri_design()
{
    system("cls");
    putih();
    printf("============================================================================\n");
    printf("||");
    gradasi_warna_4_1();
    printf("  _______  _______  _______  __   __  _______  _______  ______    ___  ");
    putih();
    printf(" ||\n");
    printf("||");
    gradasi_warna_4_1();
    printf(" |       ||       ||       ||  |_|  ||       ||       ||    _ |  |   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_2();
    printf(" |    ___||    ___||   _   ||       ||    ___||_     _||   | ||  |   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_3();
    printf(" |   | __ |   |___ |  | |  ||       ||   |___   |   |  |   |_||_ |   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_4();
    printf(" |   ||  ||    ___||  |_|  ||       ||    ___|  |   |  |    __  ||   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_5();
    printf(" |   |_| ||   |___ |       || ||_|| ||   |___   |   |  |   |  | ||   |  ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_6();
    printf(" |_______||_______||_______||_|   |_||_______|  |___|  |___|  |_||___|  ");
    putih();
    printf("||\n");
    printf("||                                                                        ||\n");
    printf("============================================================================\n");
    reset();
}

void teori_angka_design()
{
    system("cls");
    putih();
    printf("====================================================================================================\n");
    printf("||");
    gradasi_warna_3_1();
    printf("    _______  _______  _______  ______    ___     _______  __    _  _______  ___   _  _______ ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_1();
    printf("   |       ||       ||       ||    _ |  |   |   |   _   ||  |  | ||       ||   | | ||   _   |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_2();
    printf("   |_     _||    ___||   _   ||   | ||  |   |   |  |_|  ||   |_| ||    ___||   |_| ||  |_|  |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_3();
    printf("     |   |  |   |___ |  | |  ||   |_||_ |   |   |       ||       ||   | __ |      _||       |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_4();
    printf("     |   |  |    ___||  |_|  ||    __  ||   |   |       ||  _    ||   ||  ||     |_ |       |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_5();
    printf("     |   |  |   |___ |       ||   |  | ||   |   |   _   || | |   ||   |_| ||    _  ||   _   |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_3_6();
    printf("     |___|  |_______||_______||___|  |_||___|   |__| |__||_|  |__||_______||___| |_||__| |__|");
    putih();
    printf("   ||\n");
    printf("||                                                                                                ||\n");
    printf("====================================================================================================\n");
    reset();
}

void FPB_design()
{
    system("cls");
    putih();
    printf("===================================\n");
    printf("||");
    gradasi_warna_5_6();
    printf("  _______  _______  _______ ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_5_6();
    printf(" |       ||       ||  _    |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_5_5();
    printf(" |    ___||    _  || |_|   |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_5_4();
    printf(" |   |___ |   |_| ||       |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_5_3();
    printf(" |    ___||    ___||  _   | ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_5_2();
    printf(" |   |    |   |    | |_|   |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_5_1();
    printf(" |___|    |___|    |_______|");
    putih();
    printf("   ||\n");
    printf("||                               ||\n");
    printf("===================================\n");
    reset();
}

void KPK_design()
{
    system("cls");
    putih();
    printf("===================================\n");
    printf("||");
    gradasi_warna_1_6();
    printf("  ___   _  _______  ___   _  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_6();
    printf(" |   | | ||       ||   | | | ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_5();
    printf(" |   |_| ||    _  ||   |_| | ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_4();
    printf(" |      _||   |_| ||      _| ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_3();
    printf(" |     |_ |    ___||     |_  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_2();
    printf(" |    _  ||   |    |    _  | ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_1_1();
    printf(" |___| |_||___|    |___| |_| ");
    putih();
    printf("   ||\n");
    printf("||                                ||\n");
    printf("===================================\n");
    reset();
}

void permutasi_dan_kombinasi_design()
{
    system("cls");
    putih();
    printf("===========================================================================================\n");
    printf("||");
    gradasi_warna_6_1();
    printf("  _______  _______  ______    __   __  __   __  _______  _______  _______  ___      ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf(" |       ||       ||    _ |  |  |_|  ||  | |  ||       ||   _   ||       ||   |     ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf(" |    _  ||    ___||   | ||  |       ||  | |  ||_     _||  |_|  ||  _____||   |     ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf(" |   |_| ||   |___ |   |_||_ |       ||  |_|  |  |   |  |       || |_____ |   |     ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf(" |    ___||    ___||    __  ||       ||       |  |   |  |       ||_____  ||   |     ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf(" |   |    |   |___ |   |  | || ||_|| ||       |  |   |  |   _   | _____| ||   |     ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf(" |___|    |_______||___|  |_||_|   |_||_______|  |___|  |__| |__||_______||___|     ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("                          ______   _______  __    _  ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("                         |      | |   _   ||  |  | | ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf("                         |  _    ||  |_|  ||   |_| | ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf("                         | | |   ||       ||       | ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf("                         | |_|   ||       ||  _    | ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf("                         |       ||   _   || | |   | ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("                         |______| |__| |__||_|  |__| ");
    putih();
    printf("                                  ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("    ___   _  _______  __   __  _______  ___   __    _  _______  _______  ___");
    putih();
    printf("           ||\n");
    printf("||");
    gradasi_warna_6_1();
    printf("   |   | | ||       ||  |_|  ||  _    ||   | |  |  | ||   _   ||       ||   |");
    putih();
    printf("          ||\n");
    printf("||");
    gradasi_warna_6_2();
    printf("   |   |_| ||   _   ||       || |_|   ||   | |   |_| ||  |_|  ||  _____||   |");
    putih();
    printf("          ||\n");
    printf("||");
    gradasi_warna_6_3();
    printf("   |      _||  | |  ||       ||       ||   | |       ||       || |_____ |   |");
    putih();
    printf("          ||\n");
    printf("||");
    gradasi_warna_6_4();
    printf("   |     |_ |  |_|  ||       ||  _   | |   | |  _    ||       ||_____  ||   |");
    putih();
    printf("          ||\n");
    printf("||");
    gradasi_warna_6_5();
    printf("   |    _  ||       || ||_|| || |_|   ||   | | | |   ||   _   | _____| ||   |");
    putih();
    printf("          ||\n");
    printf("||");
    gradasi_warna_6_6();
    printf("   |___| |_||_______||_|   |_||_______||___| |_|  |__||__| |__||_______||___|");
    putih();
    printf("          ||\n");
    printf("||                                                                                       ||\n");
    printf("===========================================================================================\n");
    reset();
}

void permutasi_design()
{
    system("cls");
    putih();
    printf("======================================================================================\n");
    printf("||");
    gradasi_warna_4_6();
    printf("  _______  _______  ______    __   __  __   __  _______  _______  _______  ___   ");
    putih();
    printf(" ||\n");
    printf("||");
    gradasi_warna_4_6();
    printf(" |       ||       ||    _ |  |  |_|  ||  | |  ||       ||   _   ||       ||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_5();
    printf(" |    _  ||    ___||   | ||  |       ||  | |  ||_     _||  |_|  ||  _____||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_4();
    printf(" |   |_| ||   |___ |   |_||_ |       ||  |_|  |  |   |  |       || |_____ |   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_3();
    printf(" |    ___||    ___||    __  ||       ||       |  |   |  |       ||_____  ||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_2();
    printf(" |   |    |   |___ |   |  | || ||_|| ||       |  |   |  |   _   | _____| ||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_4_1();
    printf(" |___|    |_______||___|  |_||_|   |_||_______|  |___|  |__| |__||_______||___|   ");
    putih();
    printf("||\n");
    printf("||                                                                                  ||\n");
    printf("======================================================================================\n");
    reset();
}

void kombinasi_design()
{
    system("cls");
    putih();
    printf("==================================================================================\n");
    printf("||");
    gradasi_warna_3_6();
    printf("  ___   _  _______  __   __  _______  ___   __    _  _______  _______  ___   ");
    putih();
    printf(" ||\n");
    printf("||");
    gradasi_warna_3_6();
    printf(" |   | | ||       ||  |_|  ||  _    ||   | |  |  | ||   _   ||       ||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_5();
    printf(" |   |_| ||   _   ||       || |_|   ||   | |   |_| ||  |_|  ||  _____||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_4();
    printf(" |      _||  | |  ||       ||       ||   | |       ||       || |_____ |   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_3();
    printf(" |     |_ |  |_|  ||       ||  _   | |   | |  _    ||       ||_____  ||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_2();
    printf(" |    _  ||       || ||_|| || |_|   ||   | | | |   ||   _   | _____| ||   |   ");
    putih();
    printf("||\n");
    printf("||");
    gradasi_warna_3_1();
    printf(" |___| |_||_______||_|   |_||_______||___| |_|  |__||__| |__||_______||___|   ");
    putih();
    printf("||\n");
    printf("||                                                                              ||\n");
    printf("==================================================================================\n");
    reset();
}

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
    permutasi_design();
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
    kombinasi_design();
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
    persegi_design();
    printf("Masukkan panjang sisi persegi: "); scanf("%lf", &r);
    *area = r*r;
    *perimeter = 4*r;
    *sisi = r;
}

double persegi_panjang(double* area, double* perimeter){
    double p, l;
    persegi_panjang_design();
    printf("Masukkan panjang: "); scanf("%lf", &p);
    printf("Masukkan lebar  : "); scanf("%lf", &l);
    *area = p*l;
    *perimeter = 2*(p+l);
}

double lingkaran(double* area, double* perimeter, double*radius){
    double r;
    lingkaran_design();
    printf("Masukkan radius lingkaran: ");scanf("%lf", &r);
    *area = M_PI*r*r;
    *perimeter = M_PI*2*r;
    *radius =r;
}

double segitiga(double* area, double* perimeter, double* alas, double* tinggi){
    double a, t;
    segitiga_design();
    printf("Masukkan panjang sisi segitiga: ");scanf("%lf", &a);
    printf("Masukkan tinggi segitiga: ");scanf("%lf", &t);
    *area = (a*t)/2;
    *perimeter = a*3;
    *alas = a;
}

double trapezium(double* area, double* perimeter){
    double alas, t, tutup, sisi;
    trapesium_design();
    printf("Masukkan panjang alas trapesium: ");scanf("%lf", &alas);
    printf("Masukkan panjang tutup trapesium: ");scanf("%lf", &tutup);
    printf("Masukkan tinggi trapesium: ");scanf("%lf", &t);
    printf("Masukkan panjang sisi trapesium: ");scanf("%lf", &sisi);
    *area = ((alas+tutup)/2)*t;
    *perimeter = alas+2*sisi+tutup;
}

void bidangdua(){
//persegi, persegi panjang, lingkaran, segitiga, trapezium
    int selection;
    bidang_dua_design();
    printf("Pilih bidang dua: (Masukkan angka depan pilihan)\n");
    printf("1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("4. Segitiga (Sama Sisi)\n");
    printf("5. Trapesium\n");
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
    kubus_design();
    printf("Masukkan panjang rusuk kubus: "); scanf("%lf", &r);
    *volume = r*r*r;
    *surface = 6*r*r;
}

double balok(double* volume, double* surface){
    double p,l,t;
    balok_design();
    printf("Masukkan panjang: "); scanf("%lf", &p);
    printf("Masukkan lebar  : "); scanf("%lf", &l);
    printf("Masukkan tinggi : "); scanf("%lf", &t);
    *volume = p*l*t;
    *surface = 2*p*l + 2*p*t + 2*l*t;
}

double bola(double* volume, double* surface){
    double r;
    bola_design();
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
    tabung_design();
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
    limas_segitiga_design();
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    tinggisisi=findSqrt(0.25*(sisi*sisi)+(tinggisegitiga*tinggisegitiga));
    *volume = 0.33*area*tinggi;
    *surface = area + 3*(0.5*sisi*tinggisisi);
}

double limas_persegi(double* volume, double* surface){
    double area, perimeter, tinggi, sisi;
    persegi(&area, &perimeter, &sisi);
    limas_persegi_design();
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    double tinggiSisi=findSqrt(tinggi*tinggi+(0.5*sisi)*(0.5*sisi));
    double luasSisi=0.5*tinggiSisi*sisi;
    *volume=0.33*area*tinggi;
    *surface=area+4*luasSisi;
}

double kerucut(double* volume, double* surface){
    double area, perimeter, tinggi, radius;
    lingkaran(&area, &perimeter, &radius);
    limas_kerucut_design();
    printf("Masukkan tinggi limas: ");scanf("%lf", &tinggi);
    *volume = tinggi/3*area;
    *surface = M_PI*radius*(radius+findSqrt(tinggi*tinggi+radius*radius));
}

void limas(){
    limas_design();
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
    bidang_tiga_design();
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
    FPB_design();
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
    KPK_design();
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
    printf("\nKetik 1 untuk lanjutkan fungsi, ketik 0 untuk keluar ke menu utama: ");scanf("%d", &choice);
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
    teori_angka_design();
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
    permutasi_dan_kombinasi_design();
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
    kalkulator_konvensional_design();
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
    faktorial_design();
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
    fibonacci_design();
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
    aritmatika_design();
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
    geometri_design();
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
    aritmatika_design();
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
    geometri_design();
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
    aritmatika_dan_geometri_design();
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
    main_menu_design();

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