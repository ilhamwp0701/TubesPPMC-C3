#include<stdio.h>
#include<windows.h>

int main(){
    int menu, i, n;

    readfile();

    printf("Menu\n");
    printf("1. Tick\n");
    printf("2. Animate\n");
    printf("0. Quit\n");
    scanf("%d",&menu);

    while(menu != 0){
        if(menu == 1){
            tick();
            display();
        }
        else if(menu == 2){
            printf("Masukkan banyak perulangan: ");
            scanf("%d",&n);
            for(i = 0;i<n;i++){
                tick();
                display();
                sleep(250);
            }
        }
    }
}
