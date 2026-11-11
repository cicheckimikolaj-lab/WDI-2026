#include<stdio.h>
int bubble_sort(int tab[], int n) 
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i ; j++) 
        {
            if (tab[j] > tab[j + 1]) 
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    return tab;
}
int main()
{
    int tab[10];
    for(int i = 0;i <=9; i++)
    {
        printf("Podaj liczbe: \n");
        scanf("%d",&tab[i]);
    }
    printf("------------------------------------------\n");
    for(int i = 0;i <=9; i++)
    {
        printf("[%d]%d \n",i,tab[i]);
        
    }
    tab[10] = bubble_sort(tab,10);
    printf("------------------------------------------\n");
    printf("Posortowana Tablica\n");
    for(int i = 0;i <=9; i++)
    {
        printf("[%d]%d \n",i,tab[i]);
        
    }
}