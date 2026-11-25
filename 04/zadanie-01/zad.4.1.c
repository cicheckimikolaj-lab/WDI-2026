#include <stdio.h>

void quick_sort(int tab[], int low, int high) 
{
    if (low < high) 
    {
        int pivot = tab[high];
        int i = low - 1;
        int temp;

        for (int j = low; j < high; j++)
        {
            if (tab[j] <= pivot) 
            {
                i++;
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }

        temp = tab[i + 1];
        tab[i + 1] = tab[high];
        tab[high] = temp;

        int pi = i + 1;

        quick_sort(tab, low, pi - 1);
        quick_sort(tab, pi + 1, high);
    }
}

int main(void) 
{
    int tab[10];

    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &tab[i]);
    }

    quick_sort(tab, 0, 9);

    printf("Posortowana tablica:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}