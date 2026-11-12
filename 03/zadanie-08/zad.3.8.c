#include <stdio.h>
int dodajk(int tab[], int n, int a) 
{
    if (n >= 10) 
    {
        printf("full\n");
        return n;
    }
    tab[n] = a;
    return n + 1;
}
int usunk(int tab[], int n) 
{
    if (n <= 0) 
    {
        printf("empty\n");
        return 0;
    }
    
    for (int i = 0; i < n - 1; i++) 
    {
        tab[i] = tab[i + 1];
    }
    return n - 1; 
}
int dodajs(int tab[], int n, int a) 
{
    if (n >= 10) 
    {
        printf("full\n");
        return n;
    }
    tab[n] = a; 
    return n + 1;
}
int usuns(int tab[], int n) {
    if (n <= 0) 
    {
        printf("empty\n");
        return 0;
    }
    return n - 1;
}
void wyswietl(int tab[], int n) 
{
    printf("Wynik :");
    for (int i = 0; i < n; i++) 
    {
        printf("[%d] ", tab[i]);
    }
    printf("\n\n");
}
int main() {
    int tab[10];
    int n = 0; 
    int w = 0;
    printf("[1] Stos [2] Kolejka \nWybierz opcje: ");
    scanf("%d", &w);
    if (w == 1)
    {
        int a = 0;
        while (1) {
            printf("[1] Dodaj [2] Usun [3] Wyjscie\nWybor: ");
            scanf("%d", &a);
            if (a == 1) {
                int wartosc;
                printf("Podaj liczbe: ");
                scanf("%d", &wartosc);
                n = dodajs(tab, n, wartosc);
                wyswietl(tab, n);
            } 
            else if (a == 2) {
                n = usuns(tab, n);
                wyswietl(tab, n);
            } 
            else if (a == 3) {
                break;
            } 
            else {
                printf("Blad.\n");
            }
        }
    } 
    else if (w == 2) 
    {
        int a = 0;
        while (1) 
        {
            printf("[1] Dodaj [2] Usun [3] Wyjscie\nWybor: ");
            scanf("%d", &w);
            if (a == 1) 
            {
                int wartosc;
                printf("Podaj liczbe: ");
                scanf("%d", &wartosc);
                n = dodajk(tab, n, wartosc);
                wyswietl(tab, n);
            } 
            else if (a == 2)
            {
                n = usunk(tab, n);
                wyswietl(tab, n);
            } 
            else if (a == 3) 
            {
                break;
            } 
            else 
            {
                printf("Blad.\n");
            }
        }
    } 
    else 
    {
        printf("Blad.\n");
    }

    return 0;
}
