#include<stdio.h>
int main()
{
    int l1,l2,w,m;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d",&l1);
    printf("Podaj druga liczbe: ");
    scanf("%d",&l2);
    if(l1>l2)
    {
        w = l1;
        m = l2;
        printf("%d\n",w);
        printf("%d\n",m);
        printf("%d",w);
        printf(" > ");
        printf("%d",m);
    }
    else if(l1<l2)
    {
        w = l2;
        m = l1;
        printf("%d\n",w);
        printf("%d\n",m);
        printf("%d",w);
        printf(" > ");
        printf("%d",m);
    }
    else
    {
        w = l1;
        m = w;
        printf("%d\n",w);
        printf("%d\n",m);
        printf("%d",w);
        printf(" = ");
        printf("%d",m);
    }
    return 0;
}
