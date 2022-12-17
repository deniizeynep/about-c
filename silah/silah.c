#include <stdio.h>
int main()
{
    int sarjor;
    int mermi;
    int j;
    int i;
    char secim[2];
    int mermi2;
    int m;

    printf("Sarjore eklemek istediginiz mermi sayisini giriniz:");
    scanf("%d", &sarjor);

    for (j = 0; j < sarjor; j++)
    {
        if (30 <= j)
        {
            printf("Kapasite doldu!!\n");
            break;
        }
        printf("%d. eklendi\n", j + 1);
    }

    printf("Atis yapmak istediginiz sayiyi giriniz:");
    scanf("%d", &mermi);

    for (i = 0; i < mermi; i++)
    {
        if (30 <= i)
        {
            printf("Daha fazla atis yapilamaz!!\n");
            break;
        }

        printf("%d. pat\n", i + 1);
    }

    printf("Atisa devam etmek ister misiniz?");
    scanf("%s", secim);

    if (secim == 'e')
    {
        printf("devam");
    }
    else if (secim == 'h')
    {
        printf("bye bye.");
    }

    // for (m = 0; m < mermi2; m++)
    // {
    //     if (30 <= m)
    //     {
    //         printf("Daha fazla atis yapilamaz!!\n");
    //         break;
    //     }

    //     printf("%d. pat\n", m + 1);
    // }
    return 0;
}
