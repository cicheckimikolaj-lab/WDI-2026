#include <stdio.h>

int merge(int tab[], int l, int mid, int p) 
{
    int l1 = l;
    int p1 = mid + 1;
    if (tab[mid] <= tab[p1]) 
    {
        return 0;
    }

    while (l1 <= mid && p1 <= p) 
    {
        if (tab[l1] <= tab[p1]) 
        {
            l1++;
        } 
        else 
        {
            int wartosc = tab[p1];
            int indeks = p1;
            while (indeks != l1) 
            {
                tab[indeks] = tab[indeks - 1];
                indeks--;
            }
            tab[l1] = wartosc;

            l1++;
            mid++;
            p1++;
        }
    }
}

int merge_sort(int tab[], int l, int p) 
{
    if (l < p) 
    {
        int mid = l + (p - l) / 2;

        merge_sort(tab, l, mid);
        merge_sort(tab, mid + 1, p);

        merge(tab, l, mid, p);
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
    tab[10] = merge_sort(tab,0,9);
    printf("------------------------------------------\n");
    printf("Posortowana Tablica\n");
    for(int i = 0;i <=9; i++)
    {
        printf("[%d]%d \n",i,tab[i]);
        
    }
}