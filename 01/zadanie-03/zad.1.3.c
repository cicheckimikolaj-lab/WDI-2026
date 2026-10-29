#include<stdio.h>
int main()
{
    char pierwsza;
    int wiek;
    printf("Podaj pierwsza litere imienia:");
    scanf("%c",&pierwsza);
    printf("Podaj wiek: ");
    scanf("%d",&wiek);
    printf("Inicjal: %c",pierwsza);
    printf(", Wiek: %d",wiek);
    return 0;
}