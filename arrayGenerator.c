/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 � TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Minggu, 12 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : main.c
 * Deskripsi        : Program untuk mengisi array dari file eksternal
 *
*/

void arrayGenerator(int row, int col ,char ar[col][row] ,FILE *fp, char *s){	
	int i,j;
	char temp[col+2];
	fp = fopen( s , "r");
	fgets(temp, sizeof(temp), fp);
	fgets(temp, sizeof(temp), fp);
	for(j=0; j<row ; j++){
		fgets(temp, sizeof(temp), fp);
		// printf("%s",temp);
		for(i=0; i<col ; i++){
			ar[i][j] =temp[i];
			// printf("%c", ar[i][j]);
		}
		// printf("\n");
	}
}
