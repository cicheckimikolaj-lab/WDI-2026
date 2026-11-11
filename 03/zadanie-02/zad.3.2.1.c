#include<stdio.h>
unsigned long long f(unsigned n) 
{
    if (n == 1U)
    {
        return 1U;
    }
    else if (n == 2U)
    {
        return 2U;
    }
    else if (n == 3U)
    {
        return 3U;
    }
    else
    {
    return f(n - 1) * f(n - 2)* f(n - 3);
    }
}
int main()
{
    unsigned n = 0U,wynik = 0U;
    printf("Podaj liczbe nie bedaca zerem: \n");
    scanf("%u",&n);
    wynik = f(n);
    
    printf("Wynik to: %u",wynik); 
}