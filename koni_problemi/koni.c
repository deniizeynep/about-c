#include <stdio.h>

int main()
{
    // değerleri tanımladık
    int sayi = 0;
    float h;
    float taban_alan;
    float hacim;
    float PI = 3;
    float su = 500.0;

    // yükseklik girilmesi isteniyor
    printf("yükseklik giriniz:");
    scanf("%f", &h);

    // taban alanı girilmesi isteniyor
    printf("taban alanı giriniz:");
    scanf("%f", &taban_alan);

    // alınan bilgilerle hacim hesaplanıp ekrana yazdırıyor
    hacim = (taban_alan * h) / 3.0;
    printf("koninin hacmi=%2f\n", hacim);

    // 500 lt kaç defa boşaltılacağını gösteren döngü
    while (su >= hacim)
    {
        su -= hacim;
        sayi++;
    }
    printf("Sefer sayisi: %d \n", sayi);

    return 0;
}