#include<stdio.h>
int main()
{
    float l1,l2,wynik;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&l1);
    printf("Podaj druga liczbe: ");
    scanf("%f",&l2);
    wynik = l1 / l2;
    if(l2 != 0)
    {
        if(wynik == (int)wynik)
        {
            
            printf("Pierwsza liczba jest podzielna przez druga");
        }
        else
        {
            
            printf("Pierwsza liczba nie jest podzielna przez druga");
        }
    }
    else
    {
        printf("Blad");
    }

    return 0;
}