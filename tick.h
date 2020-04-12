/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Minggu, 12 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : tick.h
 * Deskripsi        : Library berisi fungsi untuk menghasilkan matriks setelah 1 kali iterasi
 *
*/

#include"cheking.h"

void tick(char *matriks,int row,int col){
    int i,j;
    char nextgen[row][col];

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(matriks[i][j]=="x"){
                if(chek_neighbour(*matriks,i,j,row,col)==2 || chek_neighbour(*matriks,i,j,row,col)==3){
                    nextgen[i][j]="x";
                }
                else{
                    nextgen[i][j]="-";
                }
            }
            else{
                if(chek_neighbour(*matriks,i,j,row,col)==3){
                    nextgen[i][j]="x";
                }
                else{
                    nextgen[i][j]="-";
                }
            }
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            *((matriks+i*col) + j)=nextgen[i][j];
        }
    }
}
