/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 9 - TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Kamis, 16 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : checking.h
 * Deskripsi        : merupakan header file untuk fungs pengecekan tetangga hidup setiap sel
 *
*/

// deklarasi fungsi checking.c

int mod(int x, int y);
int checking_neighbour(char *arr, int row, int column, int R, int C);
