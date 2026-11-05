#include<stdio.h>
int main()
{
    int n,suma;
    printf("Podaj ilosc liczb: ");
    scanf("%d",&n);
    for(int i = 1;i <=n;i++)
    {
        suma += i*i;
    }
    printf("Suma to: %d",suma);
}