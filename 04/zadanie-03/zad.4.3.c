#include <stdio.h>

int main(void) 
{
    char tekst[256];
    int licznik[256] = {0};

    printf("Podaj tekst: ");
    scanf("%255[^\n]", tekst);

    for (int i = 0; tekst[i] != '\0'; i++) 
    {
        int kod = (unsigned char)tekst[i];
        licznik[kod]++;
    }

    printf("\nWystapienia znakow:\n");
    for (int i = 0; i < 256; i++) 
    {
        if (licznik[i] > 0) 
        {
            printf("%c: %d\n", i, licznik[i]);
        }
    }

    return 0;
}