#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include"display.h"
#include"checking.h"
#include"tick.h"


int main(){
    int menu,n,i;
    int max_row,max_col;

    displayjudul();
    getrowcol(&max_row,&max_col);

    char currentgen[max_row][max_col];

    readfile();

    displaymenu();
    scanf("%d",&menu);
    while(menu != 0){
        if(menu==1){
            tick();
            displaymatrix();
        }
        else if(menu==2){
            printf("Masukkan Banyak perulangan: ");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                tick();
                displaymatrix();
                system("cls");
                sleep(250);
            }
        }
        displaymenu();
        scanf("%d",&menu);
    }
}
