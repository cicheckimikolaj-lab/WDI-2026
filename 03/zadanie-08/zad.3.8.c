#include<stdio.h>
int main()
{
    int tab[5];
    
    for(int i = 0;i <=4; i++)
    {
        printf("Podaj liczbe: \n");
        scanf("%d",&tab[i]);
    }
    printf("--------------------------------\n");
    printf("Kolejka FIFO \n");
    for(int i =0;i <=4;i++)
    {
        printf("%d) %d\n",i,tab[i]);
    }
    printf("--------------------------------\n");
    printf("Kolejka LIFO \n");
    for(int i =0;i <=4;i++)
    {
        printf("%d) %d\n",i,tab[4-i]);
    }
}
