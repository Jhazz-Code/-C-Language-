#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float r,t,v,lp;
    const float phi = 3.14;

    printf("========================================\n");
    printf("Program Volume dan Luas Permukaan Tabung\n");
    printf("========================================\n");

    printf("\nMasukan Jari-Jari Tabung : ");
    scanf("%f", &r);
    printf("Masukan Tinggi Tabung    : ");
    scanf("%f", &t);

    v = phi*r*r*t;
    lp = 2*phi*r*(r+t);

    printf("\nVolume Tabung Tersebut Adalah          : %g\n", v);
    printf("Luas Permukaan Tabung Tersebut Adalah  : %g\n", lp);

    return 0;
}
