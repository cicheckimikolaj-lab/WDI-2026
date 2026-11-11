#include<stdio.h>
int ceiling(float n)
{
    return (int)n + 1;

}
int floor(float n)
{
    return (int)n;
    
}
int round(float n)
{
    if( n >= (int)n +0.5)
    {
        return (int)n + 1;
    }
    else
    {
        return (int)n;
    }
    
}
int main()
{
    float n;
    printf("Podaj liczbe: \n");
    scanf("%f",&n);
    printf("Sufit: %d\n",ceiling(n));
    printf("Podloga: %d\n",floor(n));
    printf("Zaokraglenie: %d",round(n));

}