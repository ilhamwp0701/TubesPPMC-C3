/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Minggu, 12 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : display.c
 * Deskripsi        : library berisi fungsi-fungsi yang digunakan sebagai display pada tugas besar.
 *                    display mencangkup print array 2 dimensi, judul dan deskripsi, serta menu.
 *
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "display.h"

#define SIZE 400

void displaySeed(int *baris, int *kolom, char isi[SIZE][SIZE]){
    int i, j;

    for(j = 0; j < *baris; j++){
        for(i = 0; i < *kolom; i++){
            printf("%c", isi[i][j]);
        }
    printf("\n");
    }

    return;
}

void interface(){
    system("cls");
    printf("\n");
    puts("=================================================================================");
    puts(":WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:");
    puts("=================================================================================");
    printf("\n");
    puts("         ////   /////   //       //  //       //   ///    //  //  //  /////       ");
    puts("       //     //   //  // //    //  //  //   //  //  //  //  //      //           ");
    puts("      //     //   //  //  //   //  // // // //  //////  //  //      /////         ");
    puts("     //     //   //  //    // //  // // // //  //  //    //           //          ");
    puts("     ////   /////   //       //   ///   ///   //  //    //        /////           ");
    printf("\n");
    puts("   |XXXXXX|      |XXXX|    |XXXX|       |XXXX|  |XXXXXX|     |XXXXXX|   |XXXXXX|  ");
    puts("  |XX|         |XX|  |XX|  |XX| |XX| |XX| |XX|  |XX|        |XX|  |XX|  |XX|      ");
    puts("  |XX|  |XXX|  |XXXXXXXX|  |XX|  |XXXX|   |XX|  |XXXX|      |XX|  |XX|  |XXXX|    ");
    puts("  |XX|   |XX|  |XX|  |XX|  |XX|   |XX|    |XX|  |XX|        |XX|  |XX|  |XX|      ");
    puts("   |XXXXXXX|   |XX|  |XX|  |XX|           |XX|  |XXXXXX|     |XXXXXX|   |XX|      ");
    printf("\n");  
    puts("                       |XX|     |XXXX|  |XXXXXX|  |XXXXXX|                        ");
    puts("                       |XX|      |XX|   |XX|      |XX|                            ");
    puts("                       |XX|      |XX|   |XXXX|    |XXXX|                          ");
    puts("                       |XX|      |XX|   |XX|      |XX|                            ");
    puts("                       |XXXXX|  |XXXX|  |XX|      |XXXXX|                         ");
    printf("\n");
    puts("=================================================================================");
    puts(":WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:WELCOME:");
    puts("=================================================================================");
    printf("\n");
    printf("Press Any Key to Continue . . . ");
    getch();

    system("cls");

    puts("| =============================================================================== |");
    puts("| ----------------------- D E S K R I P S I  S I N G K A T ---------------------- |");
    puts("| =============================================================================== |");
    puts("| 'Conway's Game of Life' adalah permainan diskrit yang diciptakan oleh seorang   |");
    puts("| matematikawan asal Inggris bernama John Horton Conway pada tahun 1970.          |");
    puts("| Game ini dimainkan dengan jumlah 0 pemain yang mensimulasikan sebuah populasi   |");
    puts("| dengan aturan-aturan tertentu yang disederhanakan.                              |");
    puts("|                                                                                 |");
    puts("| Berikut adalah peraturan permainan :                                            |");
    puts("| 1. Jika ada sel hidup yang memiliki 2 atau 3 tetangga hidup maka sel tersebut   |");
    puts("|    tetap hidup pada iterasi selanjutnya.                                        |");
    puts("| 2. Jika ada sel mati yang memiliki tepat 3 tetangga hidup maka dia akan hidup   |");
    puts("|    pada iterasi selanjutnya.                                                    |");
    puts("| 3. Semua sel hidup akan mati pada iterasi selanjutnya, kecuali dengan syarat    |");
    puts("|    seperti yang telah disebutkan sebelumnya.                                    |");    
    puts("| 4. Semua sel mati akan tetap mati pada iterasi selanjutnya, kecuali dengan      |");
    puts("|    syarat seperti yang telah disebutkan sebelumnya.                             |");
    puts("| =============================================================================== |");
    printf("\n");
    printf("\n");
    printf("Press Any Key to Continue . . . ");
    getch();

    system("cls");

    puts("| =============================================================================== |");
    puts("| ---------------------- P E T U N J U K  P E R M A I N A N --------------------- |");
    puts("| =============================================================================== |");
    puts("| Terdapat beberapa menu pada game ini yaitu Animate, Tick, dan Quit.             |");
    puts("| - Animate untuk melakukan iterasi populasi sebanyak yang Anda inginkan.         |");
    puts("| - Tick untuk melakukan iterasi sebanyak satu kali.                              |");
    puts("| - Quit untuk keluar dari permainan.                                             |");
    puts("| =============================================================================== |");
    printf("\n");
    getch();
    puts("Selamat bermain!\n");
    printf("\n");
    printf("Press Any Key to Continue . . . ");
    getch();

    system("cls");

    return;
}

void displayMenu(int menu){

    system("cls");

    puts("| ================================= |");
    puts("| XXXXXXXXXX-: M E N U :-XXXXXXXXXX |");
    puts("| ================================= |");
    puts("| 1. Animate                        |");
    puts("| 2. Tick                           |");
    puts("| 3. Quit                           |");
    puts("| ================================= |");

    printf("\n");
    printf("Ketik pilihan anda (nomor saja) : ");
    scanf("%d", &menu);

    system("cls");

    while(!(menu == 1 || menu == 2 || menu == 3)){
        puts("Maaf, pilihan anda tidak valid!");

        system("pause");
        system("cls");

        puts("| ================================= |");
        puts("| XXXXXXXXXX-: M E N U :-XXXXXXXXXX |");
        puts("| ================================= |");
        puts("| 1. Animate                        |");
        puts("| 2. Tick                           |");
        puts("| 3. Quit                           |");
        puts("| ================================= |");

        printf("\n");
        printf("Ketik pilihan anda (nomor saja) : ");
        scanf("%d", &menu);

        system("cls");
    }

    return;
}