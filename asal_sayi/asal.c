#include <stdio.h>
int main()
{
    // değişkenler tanımlanıyor
    int girilen;
    int i;
    int j;
    int sayac;

    // bir sayi girmemiz isteniyor
    printf("bir sayi giriniz:");

    // girilen sayıyı yazdır
    scanf("%d", &girilen);

    // 2' den başlayarak girilen sayıya kadar döndürüyor
    for (i = 2; i <= girilen; i++)
    {
        sayac = 1;

        // i ' ye kadar sayıyı döndür
        for (j = 2; j < i; j++)
        {

            // i j'ye bölünüyorsa kendisinden başka böleni varsa döngüden çık
            if (i % j == 0)
            {
                sayac = 0;
                break;
            }
        }
        if (sayac == 1)

            // i değerinin kendisinden başka böleni yoksa yazdır
            printf("%d \n", i);
    }

    return 0;
}