#include <stdio.h>

int main()
{
    int ay;
    int gun;

    printf("ay sayisini giriniz::");
    scanf("%d", &ay);

    printf("gun giriniz:");
    scanf("%d", &gun);

    if ((ay == 12 & gun >= 12) || (ay == 1 & gun <= 20))
    {
        printf("oglak");
    }

    else if ((ay == 1 & gun >= 21) || (ay == 2 & gun <= 19))
    {
        printf("kova");
    }
    else if ((ay == 2 & gun >= 20) || (ay == 3 & gun <= 20))
    {
        printf("balik");
    }
    else if ((ay == 3 & gun >= 21) || (ay == 4 & gun <= 20))
    {
        printf("koc");
    }
    else if ((ay == 4 & gun >= 21) || (ay == 5 & gun <= 21))
    {
        printf("boga");
    }
    else if ((ay == 5 & gun >= 22) || (ay == 6 & gun <= 22))
    {
        printf("ikizler");
    }
    else if ((ay == 6 & gun >= 23) || (ay == 7 & gun <= 22))
    {
        printf("yengec");
    }
    else if ((ay == 7 & gun >= 22) || (ay == 8 & gun <= 22))
    {
        printf("aslan");
    }
    else if ((ay == 8 & gun >= 23) || (ay == 9 & gun <= 22))
    {
        printf("basak");
    }
    else if ((ay == 9 & gun >= 23) || (ay == 10 & gun <= 22))
    {
        printf("terazi");
    }
    else if ((ay == 10 & gun >= 23) || (ay == 11 & gun <= 21))
    {
        printf("akrep");
    }
    else if ((ay == 11 & gun >= 22) || (ay == 12 & gun <= 21))
    {
        printf("yay");
    }

    return 0;
}