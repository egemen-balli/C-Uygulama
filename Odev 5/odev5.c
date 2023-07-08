/*Ödev: Bir C programı oluşturun ve bir metin dosyası oluşturun veya var olan bir metin dosyasını kullanın.
 * Dosyayı açın, bir metin yazın ve ardından dosyayı kapatın. Sonra dosyayı tekrar açın, metni okuyun ve ekrana yazdırın.*/
#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

int main(){
    FILE *dosya;

    dosya=fopen("test.txt","w");

    if(dosya==NULL){
        printf("Dosya oluşturulamadi. Hata: %s",stderr);
        return 0;
    }

    fwrite("C programlama dilinde dosya islemleri nasil yapilir.",1,strlen("C programlama dilinde dosya islemleri nasil yapilir.")+1,dosya);

    printf("Dosyaya yazildi.");

    fclose(dosya);

    char *veri;
    int veri_uzunlugu=100;
    int okunan=0;
    const char *dosya_adi="test.txt";
    dosya=fopen(dosya_adi,"r");

    if(dosya==NULL){
        printf("Dosya acilamadi.");
        return 0;
    }

    veri=(char *)malloc(veri_uzunlugu);
    if(veri==NULL){
        printf("Bellek hatasi olustu.\n");
        fclose(dosya);
        return 0;
    }

    okunan=fread(veri,1,veri_uzunlugu,dosya);
    if(okunan>0){
        if(veri[okunan-1]!=0){
            veri[okunan-1]=0;
        }
    }

    printf("Okunan veri: %s\n",veri );
    printf("%s", veri);
    fclose(dosya);
    free(veri);

    return 0;
}