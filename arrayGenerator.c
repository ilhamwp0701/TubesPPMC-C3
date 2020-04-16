/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 9 - TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Kamis, 16 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : arrayGenerator.c
 * Deskripsi        : Program untuk mengisi array dari file eksternal
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include "arrayGenerator.h"

void arrayGenerator(int row, int col ,char *arr ,FILE *fp, char *s){
	int i,j;
	char temp[col+2];
	fp = fopen( s , "r");
	fgets(temp, sizeof(temp), fp);
	fgets(temp, sizeof(temp), fp);
	for(j=0; j<row ; j++){
		fgets(temp, sizeof(temp), fp);
		// printf("%s",temp);
		for(i=0; i<col ; i++){
			*((arr+j*col) + i) =temp[i];
			// printf("%c", ar[i][j]);
		}
		// printf("\n");
	}
}
