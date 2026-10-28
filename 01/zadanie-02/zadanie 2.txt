#include <stdio.h>
int main()
{
    float liczbaz;
    printf("Podaj liczbe zmiennoprzenickowa:");
    scanf("%f",&liczbaz);
    printf("%.1f\n",liczbaz);
    printf("%.3f\n",liczbaz);
    printf("%.5f\n",liczbaz);

    return 0;
}
