#include <stdio.h>
#include <stdlib.h>

void merah()
{
    printf("\033[38;5;196;48;5;232m");
}

void hijau()
{
    printf("\033[38;5;46;48;5;232m");
}

void kuning()
{
    printf("\033[38;5;226;48;5;232m");
}

void biru()
{
    printf("\033[38;5;27;48;5;232m");
}

void ungu()
{
    printf("\033[38;5;129;48;5;232m");
}

void oren()
{
    printf("\033[38;5;208;48;5;232m");
}

void reset()
{
    printf("\033[\e[0m");
}

void main()
{
    printf("==========================================================================================================================================\n");
    printf("||");
    reset();
    merah();
    printf(" ___   _  _______  ___      ___   _  __   __  ___      _______  _______  _______  ______           ______   _______  _     _  _______ ");
    reset();
    printf("||\n");
    printf("||");
    reset();
    merah();
    printf("|   | | ||   _   ||   |    |   | | ||  | |  ||   |    |   _   ||       ||       ||    _ |         |      | |       || | _ | ||   _   |");
    reset();
    printf("||\n");
    printf("||");
    oren();
    printf("|   |_| ||  |_|  ||   |    |   |_| ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||         |  _    ||    ___|| || || ||  |_|  |");
    reset();
    printf("||\n");
    printf("||");
    kuning();
    printf("|      _||       ||   |    |      _||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_        | | |   ||   |___ |       ||       |");
    reset();
    printf("||\n");
    printf("||");
    hijau();
    printf("|     |_ |       ||   |___ |     |_ |       ||   |___ |       |  |   |  |  |_|  ||    __  |       | |_|   ||    ___||       ||       |");
    reset();
    printf("||\n");
    printf("||");
    biru();
    printf("|    _  ||   _   ||       ||    _  ||       ||       ||   _   |  |   |  |       ||   |  | |       |       ||   |___ |   _   ||   _   |");
    reset();
    printf("||\n");
    printf("||");
    ungu();
    printf("|___| |_||__| |__||_______||___| |_||_______||_______||__| |__|  |___|  |_______||___|  |_|       |______| |_______||__| |__||__| |__|");
    reset();
    printf("||\n");
    printf("==========================================================================================================================================\n");
    reset();
}