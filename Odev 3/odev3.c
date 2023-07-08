/*Ödev: İki tam sayı değişkeni oluşturun. Pointer(işaretçiler) kullanarak bu değişkenlere değer atayın ve ardından
 * işaretçileri kullanarak bu değerleri ekrana yazdırın.*/
#include <stdio.h>

int main(){
    int a;
    int b;

    int *pta = &a;
    int *ptb = &b;

    *pta = 10;
    *ptb = 20;

    printf("a: %d  b: %d", a, b);
    return 0;
}