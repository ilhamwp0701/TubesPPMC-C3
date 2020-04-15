/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 - TUGAS BESAR
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
#include"display.h"
//#include"checking.h"
#include"tick.h"
#include"getRowCol.h"
#include"arrayGenerator.h"


int main(){
    int menu,n,i,j;
    int max_row,max_col;
    char filename[20];
    char quit,temp;

	FILE *fp = NULL;

    do{
        displayJudul();

        getRowCol(&max_row,&max_col,fp,filename);
        fclose(fp);

        char currentgen[max_row][max_col];

        arrayGenerator(max_row,max_col,*currentgen,fp,filename);
        fclose(fp);

        displaySeed(&max_row,&max_col,*currentgen);

        menu=displayMenu();

        while(menu != 3){
            if(menu==2){
                tick(*currentgen,max_row,max_col);
                displaySeed(&max_row,&max_col,*currentgen);
            }
            else if(menu==1){
                printf("Masukkan Banyak perulangan: ");
                scanf("%d",&n);

                for(i=0;i<n;i++){
                    system("cls");
                    tick(*currentgen,max_row,max_col);
                    displaySeed(&max_row,&max_col,*currentgen);
                    Sleep(400);
                }
            }
            menu=displayMenu();
        }
        printf("Apakah anda akan memasukkan file baru? (Y/N)");
        scanf("%c",&temp);
        scanf("%c",&quit);
        scanf("%c",&temp);
    }while(quit=='Y' || quit=='y');
}
