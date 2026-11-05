#include<stdio.h>
float mini(float a,float b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float maks(float a,float b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float l1,l2,nw,nm;
int main()
{
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&l1);
    printf("Podaj druga liczbe: ");
    scanf("%f",&l2);
    nw = maks(l1,l2);
    nm = mini(l1,l2);
    printf("Najwieksza liczba to: %f\n", nw);
    printf("Najmniejsza liczba to: %f", nm);
}