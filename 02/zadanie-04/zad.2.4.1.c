#include <stdio.h>
#include <stdbool.h>

int main()
{
    float l1 = 0, l2 = 0, wynik = 0, n = 0;
    char znak = ' '; // Domyślna spacja
    bool niezero;
    int opcja = 0;

    while(n == 0)
    {

        while(opcja != 5)
        {
            printf("--------------------------------------------------\n");
            printf("[1] Ustaw pierwsza liczbe: \n");
            printf("[2] Ustaw druga liczbe: \n");
            printf("[3] Wybor dzialania do wykonania: \n");
            printf("[4] Oblicz:");
            printf(" %f", l1);
            printf(" %c", znak);
            printf(" %f\n", l2);
            printf("[5] Zakoncz program: \n");
            
            scanf("%d", &opcja);

            if(opcja == 1)
            {
                printf("Podaj liczbe: \n");
                scanf("%f", &l1);
            }
            else if(opcja == 2)
            {
                printf("Podaj liczbe: \n");
                scanf("%f", &l2);
            }
            else if(opcja == 3)
            {
                printf("Podaj rodzaj operacji: ( + , - , / , * , %% )\n");
                scanf(" %c", &znak); 
            }
            else if(opcja == 4)
            {
                break;
            }
            else if(opcja == 5)
            {
                break;
            }
        }

        if(opcja == 5)
        {
            break;
        }

        if(l1 == 0 || l2 == 0)
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
                wynik = l1 + l2;
                printf("Wynik to: %f\n", wynik);
                break;
            case '-':
                wynik = l1 - l2;
                printf("Wynik to: %f\n", wynik);
                break;
            case '*':
                if(niezero == true || l1 == 0 || l2 == 0) 
                {
                    wynik = l1 * l2;
                    printf("Wynik to: %f\n", wynik);
                }
                break;
            case '/':
                if(l2 != 0)
                {
                    wynik = l1 / l2;
                    printf("Wynik to: %f\n", wynik);
                }
                else
                {
                    printf("Nie dzieli sie przez 0.\n");
                }
                break;
            case '%':
                if(l2 != 0 && (int)l1 == l1 && (int)l2 == l2)
                {
                    wynik = (int)l1 % (int)l2;
                    printf("Wynik to: %f\n", wynik);
                }
                else
                {
                    printf("Blad .\n");
                }
                break;
            default:
                printf("Blad\n");
                break;
        }

        
        printf("[1] Powrot do menu \n");
        printf("[2] Zakoncz program\n");
        scanf("%d", &opcja);

        if (opcja == 2)
        {
            printf("Program zakonczony.\n");
            break;
        } 
        else if (opcja == 1)
        {
            l1 = 0; 
            l2 = 0;
            wynik = 0;
            znak = ' ';
            opcja = 0;
        } 
    }

    
    return 0;
}
