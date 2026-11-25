#include <ctype.h>
#include <stdio.h>

int main(void) 
{
    char imie[100];

    printf("Podaj imie: ");
    scanf("%99s", imie);

    imie[0] = toupper(imie[0]);
    for (int i = 1; imie[i] != '\0'; i++) 
    {
        imie[i] = tolower(imie[i]);
    }

    printf("%s\n", imie);
    return 0;
}
