#include<stdio.h>
int main()
{
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d",&liczba);
    
    if(liczba>=0 && liczba % 2 == 0)
    {
        printf("Jest");
    }
    else
    {
        printf("Nie jest");
    }
    return 0;
}