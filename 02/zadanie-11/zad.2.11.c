#include<stdio.h>
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
    

}
int main()
{
    int n,w,wynik;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Podaj wykladnik potegi: ");
    scanf("%d",&w);
    wynik = potegowanie(n,w);
    printf("Wynik to: %d",wynik);
}