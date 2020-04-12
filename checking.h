/* EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
 * MODUL 8 – TUGAS BESAR
 * Kelompok         : C3
 * Hari dan Tanggal : Kamis, 9 April 2020
 * Asisten (NIM)    : Wuri Utami (13217024)
 * Nama File        : checking.h
 * Deskripsi        : Library berisi fungsi untuk mengecek berapa tetangga yang hidup pada suatu matriks toroidal
 * 
*/

// Fungsi Modulo
// Handle Negative Numbers
int mod(int x, int y) {

    return (((x % y) + y) % y);

}

// Fungsi Cek Tetangga
// Return Banyak Tetangga Hidup
int checking_neighbour(char **arr, int row, int column, int R, int C) {

    int counter = 0, i, j;

    for(i = -1; i < 2; i++) {
        for(j = -1; j < 2; j++) {
            if(i != 0 || j != 0) {
                counter += arr[mod(row+i,R)][mod(column+j,C)] == 'x';
            }
        }
    }

    return counter;

}

//    pake ini setelah datanya dimasukin ke matriks
//    char *matrix[5];
//    for(int i = 0; i < R; i++) {
//
//        matrix[i] = arr[i];
//    }
