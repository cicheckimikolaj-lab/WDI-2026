#include<stdio.h>
int main()
{
    int wybor;
    char klasa;
    printf("Podaj klase czlonka: \n");
    scanf("%c",&klasa);
    if(klasa == 'P' || klasa =='G' || klasa =='R' || klasa =='M' || klasa =='K')
    {
    switch(klasa)
    {
        case 'P':
            wybor = 1;
            printf("Poddany - moze ");
            printf("czcic Krola. ");
            break;
        case 'G':
            wybor = 2;
            printf("Giermek - moze ");
            printf("czcic Krola, ");
            printf("wchodzic na dziedziniec zamkowy codziennie. ");
            break;
        case 'R':
            wybor = 3;
            printf("Rycerz - moze ");
            printf("czcic Krola, ");
            printf("wchodzic na dziedziniec zamkowy codziennie, ");
            printf("moze wchodzic do zamku codziennie oraz rekrutować giermkcw. ");
            break;
        case 'M':
            wybor = 4;
            printf("Mag - moze ");
            printf("czcic Krola, ");
            printf("wchodzic na dziedziniec zamkowy codziennie, ");
            printf("moze wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
            printf("rozmawiać z Krolem. ");
            break;
        case 'K':
            wybor = 5;
            printf("Krolowa - moze ");
            printf("czcic Krola, ");
            printf("wchodzic na dziedziniec zamkowy codziennie, ");
            printf("moze wchodzic do zamku codziennie oraz rekrutowac giermkow, ");
            printf("rozmawiac z Krolem, ");
            printf("rozkazywac Krolowi. ");
            break;
    }
    }
}
