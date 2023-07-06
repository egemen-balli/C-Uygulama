/*Ödev: Bir C programı oluşturun ve kullanıcıdan bir kelime veya cümle girmesini isteyin. Ardından,
 * programınızda bulunan strlen fonksiyonunu kullanarak girilen kelimenin veya cümlenin uzunluğunu ekrana yazdırın.*/
#include "stdio.h"

int strlen(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    char cumle[100];
    printf("Bir cumle giriniz: ");
    gets(cumle);
    printf("Cumlenin uzunlugu: %d", strlen(cumle));
    return 0;
}