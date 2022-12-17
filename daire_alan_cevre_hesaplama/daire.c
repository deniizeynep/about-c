#include <stdio.h>
#define PI 3.1325

float alan_hesapla(float r);
float cevre_hesapla(float r);

int main()
{
    float yaricap;
    printf("Dairenin yaricapini giriniz:");
    scanf("%f", &yaricap);
    // 10 genişlik basamak sayısı 2 derinlik
    printf("Dairenin alani = %10.2f\n", alan_hesapla(yaricap));
    printf("Dairenin cevresi = %.2f", cevre_hesapla(yaricap));
}

float alan_hesapla(float r)
{
    float alan;
    alan = PI * r * r;
    return alan;
}

float cevre_hesapla(float r)
{
    float cevre;
    cevre = 2 * PI * r;
    return cevre;
}
