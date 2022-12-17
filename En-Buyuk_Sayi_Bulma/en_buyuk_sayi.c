#include <stdio.h>

int main()
{
    // değişkenler tanimlaniyor
    int sayi1;
    int sayi2;
    int sayi3;
    int sayi4;
    int max;

    // dört adet sayı girilmesi isteniyor
    printf("Dört adet sayi giriniz:");
    scanf("%d%d%d%d", &sayi1, &sayi2, &sayi3, &sayi4);

    // sayi1 en büyükse max'i sayi1'e eşitle
    max = sayi1;

    // sayi2 max'dan buyukse max'i sayi2'ye eşitle
    if (sayi2 > max)
    {
        max = sayi2;
    }

    // sayi2 max'dan buyukse max'i sayi2'ye eşitle
    if (sayi3 > max)
    {
        max = sayi3;
    }

    // sayi4 max'dan buyukse max'i sayi4'ye eşitle
    if (sayi4 > max)
    {
        max = sayi4;
    }

    // en büyüğü ekrana yazdır
    printf("%d %d %d %d  Bu sayilarin en buyugu = %d", sayi1, sayi2, sayi3, sayi4, max);

    return 0;
}