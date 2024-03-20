#include <stdio.h>
#include <stdlib.h>

void regis(){
    system("cls");
    printf("Ini Registrasi");
}
void login(){
    system("cls");
    printf("Ini Login");
}

int main(){

    int opsi;
    system("cls");
    printf("#################################################");
    printf("\n#            D ' F R A M E C R A F T            #\n");
    printf("#################################################\n\n");

    printf("||\t1. Registrasi\t||");
    printf("\t2. Login\t||\n> ");

    scanf("%d", &opsi);fflush(stdin);

    switch (opsi)
    {
    case 1:
        regis();
        break;
    case 2:
        login();
        break;
    
    default:
        printf("Pilihan tidak ada!!!!!!!!!!!!\n"); system("pause");
        main();
        break;
    }
    
}