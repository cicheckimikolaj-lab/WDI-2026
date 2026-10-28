#include<stdio.h>
int main()
{
    int oceny[5];
    for(int i = 0; i < 5;i++)
    {
        printf("Podaj ocene od 2-5 : ");
        scanf(" %d",&oceny[i]);
    }
    float wynik = 0;
    int dzielnik = 0;
    int ilejedynek = 0;
    for(int i = 0;i<5;i++)
    {
        dzielnik += 1;
        wynik += oceny[i];
        if(oceny[i] == 2)
        {
            ilejedynek +=1;
        }
    }
    printf("Srednia: %.3f\n",wynik/(float)dzielnik);
    printf("Sposrod 5 ocen, byly %d",ilejedynek);
    printf(" jedynki");
    

    
    return 0;
}