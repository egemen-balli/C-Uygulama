/*Ödev: Bir C programı oluşturun ve kullanıcıdan bir sayı girmesini isteyin. Ardından, programınızda bir özyinemeli
 * fonksiyon kullanarak faktöriyel hesaplayın ve sonucu ekrana yazdırın. Özyinemeli fonksiyonu kullanırken, her adımda
 * mevcut sayıyı azaltarak faktöriyel hesaplamaya devam edin.*/
#include <stdio.h>

int faktoriyel(int sayi){
    if(sayi == 0) return 1;

    return sayi * faktoriyel(sayi - 1);
}

int main(){
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Faktoriyel degeri: %d", faktoriyel(sayi));
    return 0;
}