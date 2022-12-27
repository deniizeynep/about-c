#include <stdio.h>

int main()
{
    // değişkenler tanimlaniyor
    int girilen;
    int sayi;
    int i;
    int j;
    int k;
    int z;

    // bir adet sayıyı ekrana yazmamız isteniyor
    printf("Bir adet sayi giriniz:");
    scanf("%d", &girilen);

    for (i = 0; i < girilen; i++)
    {

        for (j = i + 1; j <= girilen; j++)
        {
            printf(" %d ", j);
        }

        for (k = girilen; k > (girilen - i); k--)
        {
            printf(" %d ", girilen - k + 1);
        }
        printf("\n");
    }
    return 0;
}
