#include<stdio.h>
int main()
{
    float n,suma,max,min,d=0;
    while(n)
    {   

        printf("Podaj liczbe: ");
        scanf("%f",&n);
        if(d == 0)
        {
            min,max = n;
        }
        if((int)n == n && (int)n % 2 == 0)
        {
            printf("Najwieksza to: %f\n",max);
            printf("Najmniejsza to: %f\n",min);
            printf("Suma to: %f\n",suma);
            printf("Srednia to: %f\n",suma/d);
            break;
            
        }
        else
        {
            suma += n;
            if(n>max)
            {
                max = n;
            }
            else if(n<min)
            {
                min = n;
            }
            d+=1;
        }
    }
}