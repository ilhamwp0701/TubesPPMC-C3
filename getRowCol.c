/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Minggu, 12 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : main.c
 * Deskripsi        : Program untuk menghasilkan panjang baris dan kolom
 *
*/

void getRowCol(int *x, int *y, FILE *fp){
	char temp[50];
	int a, b;

	// Membaca data banyak baris
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", &a);
//	printf("%s\n",ans);
//	printf("%d\n",a);
	*x=a;

	// Membaca data banyak kolom
	fgets(temp, sizeof(temp), fp);
	sscanf(temp, "%d", &b);
//	printf("%s\n",ans);
//	printf("%d\n",b);
	*y=b;
}
