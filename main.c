/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 - TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Kamis, 16 April 2020
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
#include"display.h"
#include"tick.h"
#include"getRowCol.h"
#include"arrayGenerator.h"


int main(){
    int menu,n,i,j;//variabel
    int max_row,max_col;
    char filename[50];
    char quit,temp;

	FILE *fp = NULL;

    displayJudul();//prosedur untuk menampilkan judul game

    do{//proses menjalankan game
        getRowCol(&max_row,&max_col,fp,filename);//pembacaan kolom dan baris
        fclose(fp);

        char currentgen[max_row][max_col];//pembuatan matriks sesuai kolom dan baris

        arrayGenerator(max_row,max_col,*currentgen,fp,filename);//memasukkan seed awal ke matriks
        fclose(fp);

        displaySeed(&max_row,&max_col,*currentgen);//menampilkan seed

        menu=displayMenu();//menampilkan menu

        while(menu != 3){//proses pilihan menu
            if(menu==2){//menu tick
                tick(*currentgen,max_row,max_col);//proses tick
                displaySeed(&max_row,&max_col,*currentgen);//menampilkan seed
            }
            else if(menu==1){//menu animate
                printf("Masukkan Banyak perulangan: ");//memasukkan perulangan
                scanf("%d",&n);

                for(i=0;i<n;i++){//proses tick dengan n perulangan
                    system("cls");
                    tick(*currentgen,max_row,max_col);
                    displaySeed(&max_row,&max_col,*currentgen);
                    Sleep(400);
                }
            }
            menu=displayMenu();//menampilkan menu
        }
        printf("Apakah anda akan memasukkan file baru? (Y/N)");//ingin menggunakan file seed lain atau tidak
        scanf("%c",&temp);
        scanf("%c",&quit);
        scanf("%c",&temp);
    }while(quit=='Y' || quit=='y');

    return 0;
}
