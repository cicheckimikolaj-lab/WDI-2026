#include<stdio.h>
int potegowanie(int a,int b)
{
    int wynik = 1;
    for(int i =0;i<b;i++)
    {
        wynik = wynik * a;
    }
    return wynik;
}
int main()
{
    int n,w,wynik;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Podaj wykladnik potegi: ");
    scanf("%d",&w);
    wynik = potegowanie(n,w);
    printf("Wynik to: %d",wynik);
}