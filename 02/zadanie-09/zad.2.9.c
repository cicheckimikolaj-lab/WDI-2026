#include<stdio.h>
int main()
{
    int n,wynik = 1;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    for(int i = 1; i <= n ;i++)
    {
        wynik = wynik * i;
    }
    printf("Wynik to : %d",wynik);
}