#include<stdio.h>
int main()
{
    const unsigned granica = 20U;
    unsigned suma = 0U;
    for(unsigned i =1U; i <= granica;i++)
    {
        if(i % 3U == 0U)
        {
            suma+=i;
        }
    }
    printf("%u",suma);
}
