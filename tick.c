/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 - TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Kamis, 16 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : tick.c
 * Deskripsi        : Library berisi fungsi untuk menghasilkan matriks setelah 1 kali iterasi
 *
*/

#include"checking.h"

void tick(char *matriks,int row,int col){//fungsi tick
    int i,j;
    char nextgen[row][col];

    for(i=0;i<row;i++){//proses pembacaan matriks currentgen
        for(j=0;j<col;j++){
            if(*((matriks+i*col) + j)=='X'){//cek sel hidup atau mati
                if(checking_neighbour(matriks,i,j,row,col)==2 || checking_neighbour(matriks,i,j,row,col)==3){//cek jumlah tetangga
                    nextgen[i][j]='X';
                }
                else{
                    nextgen[i][j]='-';
                }
            }
            else{//sel mati
                if(checking_neighbour(matriks,i,j,row,col)==3){//cek jumlah tetangga
                    nextgen[i][j]='X';
                }
                else{
                    nextgen[i][j]='-';
                }
            }
        }
    }

    for(i=0;i<row;i++){//proses memasukkan isi matriks nextgen ke current gen
        for(j=0;j<col;j++){
            *((matriks+i*col) + j)=nextgen[i][j];
        }
    }
}
