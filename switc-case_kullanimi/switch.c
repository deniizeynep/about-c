#include <stdio.h>

int main()
{
    int islem;
    int bakiye = 1000;
    int tutar;

    printf("İslemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart İade\n\n\n");

    printf("İslemi Seciniz:");
    scanf("%d", &islem);

    switch (islem)
    {
    case 1:
        printf("Bakiyeniz: %d\n", bakiye);
        printf("Cekilecek Tutar:");
        scanf("%d", &tutar);
        if (tutar > bakiye)
        {
            printf("Bakiye Yetersiz");
        }
        bakiye -= tutar;
        printf("Bakiye Yetersiz\n");
        break;

    case 2:
        printf("Bakiyeniz: %d\n", bakiye);
        printf("Yatiralacak Tutar:");
        scanf("%d", &tutar);
        bakiye += tutar;
        printf("Bakiyeniz %d", bakiye);
        break;

    case 3:
        printf("Bakiyeniz: %d\n", bakiye);
        printf("Havale Yapiacak Tutar:");
        scanf("%d", &tutar);
        if (tutar > bakiye)
        {
            printf("Bakiye Yetersiz\n");
        }
        bakiye -= tutar;
        printf("Bakiyeniz %d", bakiye);
        break;

    case 4:
        printf("Bakiyeniz %d", bakiye);
        break;

    case 5:
        printf("Kart İade Edildi.\n");
        break;

    default:
        printf("Bilinmeyen İslem");
        break;
    }
}