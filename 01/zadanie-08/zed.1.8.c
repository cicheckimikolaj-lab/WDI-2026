#include<stdio.h>
int main()
{
   float wynik;
   float l1;
   float l2;
   char znak;
   printf("Wybierz operacje matematyczna: ");
   scanf("%c",&znak);
   printf("Podaj pierwsza liczbe: ");
   scanf("%f",&l1);
   printf("Podaj druga liczbe: ");
   scanf("%f",&l2);
   
    
   
    if(znak == '+')
    {
        wynik = l1+l2;
        printf("Wynik to :  %f",wynik);
    }
    else if(znak == '-')
    {
        wynik = l1-l2;
        printf("Wynik to :  %f",wynik);
    }
    else if(l1 != 0 && l2 !=0)
    {
        if(znak == '*')
        {
            wynik = l1*l2;
            printf("Wynik to :  %f",wynik);
        }
        else if(znak == '/')
        {
            wynik = l1/l2;
            printf("Wynik to :  %f",wynik);
        }
        else if(znak == '%')
        {
            
            (int)wynik = (int)l1%(int)l2;
            printf("Wynik to :  %f",wynik);
        }
        else
        {
            printf("Uzyj poprawnego znaku: ");
        }
    }
    else if(l1 == 0 || l2 ==0)
    {
        printf("Nie wykonuj tych operacji z uzyciem zera");
    }
    else
    {
        printf("Uzyj poprawnego znaku");
    }
    
    return 0;
}