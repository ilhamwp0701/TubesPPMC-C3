/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Rabu, 15 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : main.c
 * Deskripsi        : Program untuk menggabungkan setiap fungsi dan menjalankan operasi sesuai problem yang diberikan
 *
*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include"display.c"
#include"checking.h"
#include"tick.h"
#include"getRowCol.c"
#include"arrayGenerator.c"


int main(){
    int menu,n,i,j;
    int max_row,max_col;
    char filename[20];

	FILE *fp = NULL;

    getRowCol(&max_row,&max_col,fp,filename);
    fclose(fp);

    char currentgen[max_row][max_col];

    arrayGenerator(max_row,max_col,*currentgen,fp,filename);
    fclose(fp);

    interface();
    displaySeed(&max_row,&max_col,*currentgen);

    displayMenu(&menu);


    while(menu != 3){
        if(menu==2){
            tick(*currentgen,max_row,max_col);
            displaySeed(&max_row,&max_col,*currentgen);
        }
        else if(menu==1){
            printf("Masukkan Banyak perulangan: ");
            scanf("%d",&n);
            system("cls");
            for(i=0;i<n;i++){
                tick(*currentgen,max_row,max_col);
                displaySeed(&max_row,&max_col,*currentgen);
                Sleep(400);
                system("cls");
            }
        }
        displayMenu(&menu);
    }
}
