#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

//#include "interface.h"

int main(){
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
    printf("Press Enter to Continue ...");
    getch();

    system("cls");

    puts("Deskripsi Singkat :");
    puts("'Conway's Game of Life' adalah permainan diskrit yang diciptakan oleh seorang ");
    puts("matematikawan asal Inggris bernama John Horton Conway pada tahun 1970.");
    puts("Game ini dimainkan dengan jumlah 0 oemain yang mensimulasikan sebuah populasi");
    puts("dengan aturan-aturan tertentu yang disederhanakan.");
    printf("\n");
    puts("Berikut adalah peraturan permainan :");
    puts("1. Jika ada sel hidup yang memiliki 2 atau 3 tetangga hidup maka sel tersebut");
    puts("   tetap hidup pada iterasi selanjutnya.");
    puts("2. Jika ada sel mati yang memiliki tepat 3 tetangga hidup maka dia akan hidup");
    puts("   pada iterasi selanjutnya.");
    puts("3. Semua sel hidup akan mati pada iterasi selanjutnya, kecuali dengan syarat");
    puts("   seperti yang telah disebutkan sebelumnya.");    
    puts("4. Semua sel mati akan tetap mati pada iterasi selanjutnya, kecuali dengan syarat");
    puts("   seperti yang telah disebutkan sebelumnya.");
    printf("\n");
    printf("\n");
    printf("Press Any Key to Continue ...");
    getch();

    system("cls");

    puts("Petunjuk Permainan:");
    puts("Terdapat beberapa menu pada game ini yaitu Animate, Tick, dan Quit.");
    puts("- Animate untuk melakukan iterasi populasi sebanyak yang Anda inginkan.");
    puts("- Tick untuk melakukan iterasi sebanyak satu kali.");
    puts("- Quit untuk keluar dari permainan.");
    printf("\n");
    getch();
    puts("Selamat bermain!\n");
    printf("\n");
    printf("Press Any Key to Continue ...");
    getch();

    system("cls");

    return 0;
}