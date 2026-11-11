#include<stdio.h>
float obliczsr(int tab[4])
{
    float wynik = 0;
    for(int i =0;i<=4;i++)
    {
        wynik += tab[i];

    }
    return wynik/5;
}
int main()
{
    int tab[4];
    float srednia;
    for(int i = 0;i <=4; i++)
    {
        printf("Podaj liczbe: \n");
        scanf("%d",&tab[i]);
    }
    srednia = obliczsr(tab);
    printf("Liczby wieksze od sredniej: \n");
    for(int i = 0;i<=4;i++)
    {
        if(tab[i] >= srednia)
        {
            printf("%d\n",tab[i]);
        }
    }
}