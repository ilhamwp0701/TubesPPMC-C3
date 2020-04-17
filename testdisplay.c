#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "display.h"

#define SIZE 400

int baris, kolom;
int bbaris, kkolom;
int *pbaris, *pkolom;
char isi[SIZE][SIZE];
char temp[100];

void readFile(char file[20], char temp[100], int *baris, int *kolom, char isi[SIZE][SIZE]){
    int i, j;

    FILE *fp;
    fp = fopen(file, "r");

    fgets(temp, 5, fp);
    *baris = atoi(temp);

    printf("%d\n", *baris);

    fgets(temp, 5, fp);
    *kolom = atoi(temp);

    printf("%d\n", *kolom);
    
    for (j = 0; j < *baris; j++){
        fgets(temp, 100, fp);
        for (i = 0; i < *kolom; i++){
            isi[i][j] = temp[i];
        }
    }

    for (j = 0; j < *baris; j++){
        for (i = 0; i < *kolom; i++){
            printf("%c", isi[i][j]);
        }
        printf("\n");
    }

    return;
}

int main(){
    char file[20];
    int menu;

    pbaris = &bbaris;
    pkolom = &kkolom;

    interface();

    printf("Masukkan file: ");
    gets(file);

    system("cls");

    readFile(file, temp, pbaris, pkolom, isi);

    printf("Press Any Key to Continue . . . ");
    getch();

    displayMenu(menu);

    displaySeed(pbaris, pkolom, isi);

    return 0;
}