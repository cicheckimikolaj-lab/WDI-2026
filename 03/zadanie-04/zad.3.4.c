#include<stdio.h>
int suma_cyfr(n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + suma_cyfr(n/10);
    }
}
int main()
{
    int n;
    printf("Podaj liczbe: \n");
    scanf("%d",&n);
    printf("Wynik to: %d",suma_cyfr(n));

}