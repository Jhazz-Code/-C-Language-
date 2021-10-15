#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, l;
    const float phi = 3.14;

    printf("======================\n");
    printf("Program Luas Lingkaran\n");
    printf("======================\n");

    printf("\nMasukan Panjang Jari-Jari Lingakaran : ");
    scanf("%f", &r);

    l = phi*r*r;
    printf("\nLuas Lingkaran Tersebut Adalah : %g\n", l);

    return 0;
}
