#include<stdio.h>
float obliczsr(int tab[10])
{
    float wynik = 0;
    for(int i =0;i<=9;i++)
    {
        wynik += tab[i];

    }
    return wynik/10;
}
int wypisz(int tab[10])
{
    float srednia;
    srednia = obliczsr(tab);
    printf("Liczby wieksze od sredniej: \n");
    for(int i = 0;i<=9;i++)
    {
        if(tab[i] >= srednia)
        {
            printf("%d\n",tab[i]);
        }
    }
    return 0;
}

int minmax(int tab[10])
{
    int min,max;
    min = tab[0];
    max = tab[0];
    for(int i =0; i <=9; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
        else if(tab[i] < min)
        {
            min = tab[i];
        }
    

    }
    printf("Najwieksza liczba to %d.\n",max);
    printf("Najmniejsza liczba to %d.\n",min);
    return 0;
}
int suma(int tab[10])
{
    int suma = 0;
    for(int i =0;i <=9;i++)
    {
        if(tab[i] % 2!=0)
        {
        suma += tab[i];
        }
    }
    printf("Suma to: %d\n",suma);
    return 0;
}
int ostatnia(int tab[10])
{
    return tab[9];
}
int main()
{
    int tab[9];
    for(int i = 0;i <=9; i++)
    {
        printf("Podaj liczbe: \n");
        scanf("%d",&tab[i]);
    }
    printf("Srednia to: %f\n",obliczsr(tab));
    wypisz(tab);
    minmax(tab);
    suma(tab);
    printf("Ostatnia to: %d\n",ostatnia(tab));
    return 0;

}
