#include <stdio.h>

int main(void) 
{
    char s1[100], s2[100];
    int licznik[256] = {0};
    int anagram = 1;

    printf("Podaj pierwszy wyraz: ");
    scanf("%99s", s1);

    printf("Podaj drugi wyraz: ");
    scanf("%99s", s2);

    for (int i = 0; s1[i] != '\0'; i++) 
    {
        licznik[(unsigned char)s1[i]]++;
    }

    for (int i = 0; s2[i] != '\0'; i++) 
    {
        licznik[(unsigned char)s2[i]]--;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (licznik[i] != 0) 
        {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1) 
    {
        printf("Wyrazy sa anagramami.\n");
    } 
    else 
    {
        printf("Wyrazy nie sa anagramami.\n");
    }

    return 0;
}