#include<stdio.h>
int main()
{
    int n;
    float k,wynik = 0;
    printf("Podaj ilosc liczb: ");
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        printf("Podaj liczbe: ");
        scanf("%f",&k);
        wynik += k;
    }
    printf("Wynik: %f\n",wynik);
    printf("Srednia: %f",wynik/n);
    return 0;    
}