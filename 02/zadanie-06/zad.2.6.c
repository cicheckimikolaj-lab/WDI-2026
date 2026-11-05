#include<stdio.h>
int main()
{
    int numerm;
    printf("Podaj numer miesiaca :");
    scanf("%d",&numerm);
    switch(numerm)
    {
        case 1:
        case 2:
        case 3:
            printf("Pierwszy kwartal.");
            break;
        case 4:
        case 5:
        case 6:
            printf("Drugi kwartal.");
            break;
        case 7:
        case 8:
        case 9:
            printf("Trzeci kwartal.");
            break;
        case 10:
        case 11:
        case 12:
            printf("Czwarty kwartal.");
            break;

    }
}