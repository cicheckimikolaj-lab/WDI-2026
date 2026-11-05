#include<stdio.h>
int dodawanie()
{
    int n,wynik = 0,b;
    printf("Podaj liczbe powtorzen: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("Podaj liczbe: ");
        scanf("%d",&b);
        wynik += b;
    }
    return wynik;
}
int odejmowanie()
{
    int a = 0,b=1,wynik= 0;
    printf("Podaj liczbe od ktorej chcesz odejmowac: ");
    scanf("%d",&a);

    while(b!= 0)
    {
        printf("Podaj liczbe kotra chcesz odjac: ");
        scanf("%d",&b);
        a = a -b;
        printf("Wynik : %d",a);
    }
    return a;

}
int mnozenie(a,b)
{
    return a*b;
}
float dzielenie(int a,int b)
{
    return (float)a/(float)b;
}
int potegowanie(a,b)
{
    if( b == 0)
    {
        return 1;
    }
    else if(b>0)
    {
        return a * potegowanie(a,b-1);
    }
    else
    {
        return 0;
    }
}
int kwadrat(a)
{
    return a*a;
}
int silnia()
{
    int n,wynik = 1;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        wynik = wynik * i;
    }
    return wynik;
}
int main()
{
    int l1 = 0,l2 = 0,wynik = 0,opcja =0;
    float wynikd;
    while(opcja != 8)
        {
            printf("--------------------------------------------------\n");
            printf("[1]Dodawanie n liczb\n");
            printf("[2]Odejmowanie od liczby az do momentu podania '0' \n");
            printf("[3]Mnozenie dwoch liczb \n");
            printf("[4]Dzielenie liczby \n");
            printf("[5]Potegowanie \n");
            printf("[6]Kwadrat liczby \n");
            printf("[7]Silnia \n");
            printf("[8]Koniec programu \n");
            scanf("%d", &opcja);

            if(opcja == 1)
            {
                wynik = dodawanie();
                printf("---------------------------------------------\n");
                printf("Wynik to : %d\n",wynik);
            }
            else if(opcja == 2)
            {
                wynik = odejmowanie();
                printf("---------------------------------------------\n");
                printf("Wynik to : %d\n",wynik);
            }
            else if(opcja == 3)
            {
                printf("Podaj pierwsza liczbe: ");
                scanf("%d",&l1);
                printf("Podaj druga liczbe: ");
                scanf("%d",&l2);
                wynik = mnozenie(l1,l2);
                printf("---------------------------------------------\n");
                printf("Wynik to : %d\n",wynik);
            }
            else if(opcja == 4)
            {
                printf("Podaj mianownik: ");
                scanf("%d",&l1);
                printf("Podaj dzielnik: ");
                scanf("%d",&l2);
                wynikd = dzielenie(l1,l2);
                printf("---------------------------------------------\n");
                printf("Wynik to : %f\n",wynikd);
            }
            else if(opcja == 5)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&l1);
                printf("Podaj wykladnik: ");
                scanf("%d",&l2);
                wynik = potegowanie(l1,l2);
                printf("---------------------------------------------\n");
                printf("Wynik to : %d\n",wynik);
                
            }
            else if(opcja == 6)
            {
                printf("Podaj liczbe: ");
                scanf("%d",&l1);
                wynik = kwadrat(l1);
                printf("---------------------------------------------\n");
                printf("Wynik to : %d\n",wynik);
            }
            else if(opcja == 7)
            {
                wynik = silnia();
                printf("---------------------------------------------\n");
                printf("Wynik to : %d\n",wynik);
            }
            else if(opcja == 8)
            {
                break;
            }
        }
        return 0;
}