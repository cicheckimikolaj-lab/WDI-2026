#include <stdio.h>

int main(void) 
{
    char tekst[100];
    int i = 0;
    int znak = 1;
    int poprawna = 1;
    int wynik = 0;

    printf("Podaj liczbe calkowita: ");
    scanf("%99s", tekst);

    if (tekst[0] == '\0') 
    {
        poprawna = 0;
    } 
    else if (tekst[0] == '-')
    {
        znak = -1;
        i = 1;
        if (tekst[1] == '\0') 
        {
            poprawna = 0;
        }
    } 
    else if (tekst[0] == '+') 
    {
        i = 1;
        if (tekst[1] == '\0') 
        {
            poprawna = 0;
        }
    }

    while (poprawna && tekst[i] != '\0') 
    {
        if (tekst[i] >= '0' && tekst[i] <= '9') 
        {
            wynik = wynik * 10 + (tekst[i] - '0');
        } else 
        {
            poprawna = 0;
        }
        i++;
    }

    if (poprawna) 
    {
        wynik = wynik * znak;
        printf("To liczba calkowita: %d\n", wynik);
    } 
    else 
    {
        printf("Podany ciag nie jest liczba calkowita.\n");
    }

    return 0;
