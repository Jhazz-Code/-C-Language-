#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char id[11], nama[50];
    int usia;

    printf("Masukan ID   : ");
    scanf("%s",&id);
    fflush(stdin);
    printf("Masukan Nama : ");
    gets(nama);
    printf("Masukan Usia : ");
    scanf("%i",&usia);


    printf("\nID \t     : %s\n", id);
    printf("Nama \t     : %s\n", nama);
    printf("Usia \t     : %i\n", usia);


    return 0;
}
