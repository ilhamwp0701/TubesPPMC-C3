/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 9 - TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Kamis, 16 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : getRowCol.c
 * Deskripsi        : Program untuk menghasilkan panjang baris dan kolom
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getRowCol.h"

void getRowCol(int *x, int *y, FILE *fp, char *st){
	// Variable Lokal
	char f[50],temp[50];
	int a, b;

	// input file
	//	openFile(fp);
	printf("Masukkan nama file : ");
	gets(f);
	strcpy(st, f);
	fp = fopen( st , "r");

	//// Membaca data banyak baris
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", &a);
//	printf("%s\n",ans);
//	printf("%d\n",a);
	*x=a;

	//// Membaca data banyak kolom
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", &b);
//	printf("%s\n",ans);
//	printf("%d\n",b);
	*y=b;

//	char arr[col][row];
}
