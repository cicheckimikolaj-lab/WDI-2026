#include<stdio.h>
int main()
{
    int n,wynik;
    printf("Podaj liczbe naturalna: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        wynik += i;
    }
    printf("%d",wynik);
    return 0;
}