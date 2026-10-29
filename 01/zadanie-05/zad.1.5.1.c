
#include<stdio.h>
int main()
{
    int oceny[5];
    for(int i = 0; i < 5;i++)
    {
        printf("Podaj ocene: ");
        scanf(" %d",&oceny[i]);
    }
    float wynik = 0;
    int dzielnik = 0;
    for(int i = 0;i<5;i++)
    {
        dzielnik += 1;
        wynik += oceny[i];
    }
    printf("Srednia: %.3f",wynik/(float)dzielnik);
    
    return 0;
}
