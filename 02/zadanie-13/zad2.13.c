#include <stdio.h>

int fibonacci(int n) 
{
    if (n <= 0)
    {
    return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n,wynik = 0;
    printf("Podaj numer wyrazu ciagu: ");
    scanf("%d", &n);
    wynik = fibonacci(n);
    printf("wynik to:%d ",wynik);

    return 0;
}