#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*

GIRILEN METINDEKI KELIMELERI ILK HARFINE GORE KISALTIR
SIMPLE:
//>> MUHAMMET ERTUGRUL OZER ----> MEO
//>> MUSTAFA KEMAL ATATURK ----> MKA

*/
main(){
    char txt[99999];
    int uzunluk;
    printf("LUTFEN KISALTMAK ISTEDIGINIZ METINI GIRINIZ :\n");
    gets(txt);
    printf("%c", toupper(txt[0]));
    uzunluk=strlen(txt);
    for(int i=0;i<=uzunluk;i++)
        {
            if(txt[i]==' ')
                
            printf("%c", toupper(txt[i+1]));
            
        }
}
