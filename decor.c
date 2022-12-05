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
    printf("3. Kalkulator deret aritmatika/geometri.\n");
    printf("4. Print angka fibonacci ke-n\n");
    printf("5. Bidang Dua\n");
    printf("6. Bidang Tiga\n");
    printf("7. Teori Angka ");
    merah();
    printf("(FPB, KPK, Converter)\n");
    putih();
    printf("8. Permutasi dan Kombinasi\n");
    printf("9. Help\n");
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

void converter_design()
{
    system("cls");
    putih();
    printf("===========================================================================================\n");
    printf("||");
    gradasi_warna_2_6();
    printf("  _______  _______  __    _  __   __  _______  ______    _______  _______  ______   ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_6();
    printf(" |       ||       ||  |  | ||  | |  ||       ||    _ |  |       ||       ||    _ |  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_5();
    printf(" |       ||   _   ||   |_| ||  |_|  ||    ___||   | ||  |_     _||    ___||   | ||  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_4();
    printf(" |       ||  | |  ||       ||       ||   |___ |   |_||_   |   |  |   |___ |   |_||_ ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_3();
    printf(" |      _||  |_|  ||  _    ||       ||    ___||    __  |  |   |  |    ___||    __  |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_2();
    printf(" |     |_ |       || | |   | |     | |   |___ |   |  | |  |   |  |   |___ |   |  | |");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_1();
    printf(" |_______||_______||_|  |__|  |___|  |_______||___|  |_|  |___|  |_______||___|  |_|");
    putih();
    printf("   ||\n");
    printf("||                                                                                       ||\n");
    printf("===========================================================================================\n");
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

void temperatur_design()
{
    system("cls");
    putih();
    printf("===================================================================================================\n");
    printf("||");
    gradasi_warna_2_1();
    printf("  _______  _______  __   __  _______  _______  ______    _______  _______  __   __  ______  ");
    putih();
    printf("   ||\n");
    printf("||");
    gradasi_warna_2_1();
    printf(" |       ||       ||  |_|  ||       ||       ||    _ |  |   _   ||       ||  | |  ||    _ |  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_2();
    printf(" |_     _||    ___||       ||    _  ||    ___||   | ||  |  |_|  ||_     _||  | |  ||   | ||  ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_3();
    printf("   |   |  |   |___ |       ||   |_| ||   |___ |   |_||_ |       |  |   |  |  |_|  ||   |_||_ ");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_4();
    printf("   |   |  |    ___||       ||    ___||    ___||    __  ||       |  |   |  |       ||    __  |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_5();
    printf("   |   |  |   |___ | ||_|| ||   |    |   |___ |   |  | ||   _   |  |   |  |       ||   |  | |");
    putih();
    printf("  ||\n");
    printf("||");
    gradasi_warna_2_6();
    printf("   |___|  |_______||_|   |_||___|    |_______||___|  |_||__| |__|  |___|  |_______||___|  |_|");
    putih();
    printf("  ||\n");
    printf("||                                                                                               ||\n");
    printf("===================================================================================================\n");
    reset();
}

void main()
{
    main_menu_design();
}