#include<stdio.h>

int main()
{
    int tab[10];
    for(int i = 0;i <= 20;i+=2)
    {
        tab[i/2] = i;
    }
    for(int i = 0; i <= 10; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    int i = 0;
    printf("---------------------------------------\n");
    while(i <= 10)
    {
        printf("tab[%d] = %d\n", 10-i, tab[10-i]);
        i++;
    }
    i =0;
    printf("---------------------------------------\n");
    do
    {
        printf("tab[%d] = %d\n", 10-i, tab[10-i]);
        i++;
    } while(i<=10);
}