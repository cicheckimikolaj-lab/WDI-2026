#include <stdio.h>

int main(void) 
{
    int wybor;
    int klucz = 3;
    char tekst[256];

    do {
        printf("\n--- SZYFR CEZARA (aktualny klucz: %d) ---\n", klucz);
        printf("1. Szyfruj tekst\n");
        printf("2. Deszyfruj tekst\n");
        printf("3. Ustaw klucz szyfrujacy\n");
        printf("0. Wyjscie\n");
        printf("Wybierz opcje: ");
        scanf("%d", &wybor);

        if (wybor == 1 || wybor == 2) 
        {
            int przesuniecie = klucz % 26;
            if (przesuniecie < 0) 
            {
                przesuniecie += 26;
            }
            if (wybor == 2) 
            {
                przesuniecie = -przesuniecie;
            }

            printf("Podaj tekst (bez spacji): ");
            scanf("%255s", tekst);

            for (int i = 0; tekst[i] != '\0'; i++) 
            {
                if (tekst[i] >= 'a' && tekst[i] <= 'z') 
                {
                    tekst[i] = 'a' + (tekst[i] - 'a' + przesuniecie + 26) % 26;
                } 
                else if (tekst[i] >= 'A' && tekst[i] <= 'Z') 
                {
                    tekst[i] = 'A' + (tekst[i] - 'A' + przesuniecie + 26) % 26;
                }
            }

            printf("Wynik: %s\n", tekst);
        } 
        else if (wybor == 3) 
        {
            printf("Podaj nowy klucz: ");
            scanf("%d", &klucz);
        } 
        else if (wybor != 0) 
        {
            printf("Niepoprawny wybor.\n");
        }
    }
    while (wybor != 0);

    return 0;
}
