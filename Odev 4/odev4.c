/*Ödev: Bir C programı oluşturun ve kullanıcıdan ondalık bir sayı girmesini isteyin. Ardından, programınızda
 * printf fonksiyonunu kullanarak girilen sayıyı onaltılık (hexadecimal) biçimde ekrana yazdırın.*/
#include <stdio.h>

int main()
{
    int sayi, bolum, kalan;
    int i, j = 0;
    char hexadecimal[100];

    printf("Ondalikli bir sayi giriniz: ");
    scanf("%d", &sayi);

    bolum = sayi;

    while (bolum != 0)
    {
        kalan = bolum % 16;
        if (kalan < 10)
            hexadecimal[j++] = 48 + kalan;
        else
            hexadecimal[j++] = 55 + kalan;
        bolum = bolum / 16;
    }


    printf("Hexadecimal sayi: \n");
    for (i = j; i >= 0; i--)
        printf("%c", hexadecimal[i]);

    return 0;
}