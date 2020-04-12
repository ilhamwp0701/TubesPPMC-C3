/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Minggu, 12 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : main.c
 * Deskripsi        : Program untuk mengisi array dari file eksternal
 *
*/

void arrayGenerator(int row, int col ,char *arr ,FILE *fp){

	int i,j;
	char temp[col+2];

	for(j=0; j<row ; j++){
		fgets(temp, sizeof(temp), fp);
		printf("%s",temp);
		printf("j = %d\n", j);
		for(i=0; i<col ; i++){
			printf("i = %d\n", i);
			*((arr+j*col) + i) =temp[i];
//			count+=(arr[i][j]=='x');
		}
	}
}
