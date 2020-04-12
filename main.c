/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Minggu, 12 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : main.c
 * Deskripsi        : Program untuk menggabungkan setiap fungsi dan menjalankan operasi sesuai problem yang diberikan
 *
*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include"display.h"
#include"checking.h"
#include"tick.h"


int main(){
    int menu,n,i;
    int max_row,max_col;

    displayjudul();
    getrowcol(&max_row,&max_col);

    char currentgen[max_row][max_col];

    readfile();

    displaymenu();
    scanf("%d",&menu);
    while(menu != 0){
        if(menu==1){
            tick();
            displaymatrix();
        }
        else if(menu==2){
            printf("Masukkan Banyak perulangan: ");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                tick();
                displaymatrix();
                system("cls");
                sleep(250);
            }
        }
        displaymenu();
        scanf("%d",&menu);
    }
}
