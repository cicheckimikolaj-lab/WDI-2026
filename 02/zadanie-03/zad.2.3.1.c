#include<stdio.h>
#include<stdbool.h>
int main()
{
    float l1,l2,wynik;
    char znak;
    bool niezero;
    printf("Podaj jaka operacje chcesz wykonac: \n");
    scanf("%c",&znak);
    printf("Podaj pierwsza liczbem: \n");
    scanf("%f",&l1);
    printf("Podaj druga liczbe: \n");
    scanf("%f",&l2);
    if(l1 == 0 || l2 ==0)
    {
        niezero = false;
    }
    else
    {
        niezero = true;
    }
    switch(znak)
    {
        case '+':
        wynik = l1+l2;
        printf("Wynik to: %f", wynik);
        break;
        case '-':
        wynik = l1-l2;
        printf("Wynik to: %f", wynik);
        break;
        case '*':
        if(niezero == true)
        {
            wynik = l1*l2;
            printf("Wynik to: %f", wynik);
            break;
        }
        else
        {
            printf("Nie mnozy sie przez 0.");
            break;
        }
        case '/':
        if(niezero == true)
        {
            wynik = l1/l2;
            printf("Wynik to: %f", wynik);
            break;
        }
        else
        {
            printf("Nie dzieli sie przez 0.");
            break;
        }
        case '%':
        if(niezero == true && (int)l1==l1 && (int)l2==l2)
        {
            wynik = (int)l1%(int)l2;
            printf("Wynik to: %f", wynik);
            break;
        }
        else
        {
            printf("Nie mnozy sie przez 0.");
            break;
        }


    }
}
