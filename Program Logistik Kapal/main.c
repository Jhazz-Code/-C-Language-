#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("============================\n");
    printf("Program Logistik Paket Kapal\n");
    printf("============================\n");

    int tampung = 990, cntr = 20, totaltampung, sisapaket;
    totaltampung = tampung / cntr;
    sisapaket = tampung % cntr;

    printf("\nBanyak Container Yang Dapat Dibawa :  %i paket\n",totaltampung);
    printf("Paket Yang Tersisa                 :  %i paket\n",sisapaket);
    return 0;
}
