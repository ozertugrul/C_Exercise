#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*

ilk harfi buyut ve bastir
dongu baslat uzunluga kadar
if bosluk; i+1 buyut ve bastir 

*/
main(){
    char txt[99999];
    int uzunluk;
    printf("LUTFEN KISALTMAK ISTEDIGINIZ KURUMUN ADINI GIRIN :\n");
    gets(txt);
    printf("%c", toupper(txt[0]));
    uzunluk=strlen(txt);
    for(int i=0;i<=uzunluk;i++)
        {
            if(txt[i]==' ')
                
            printf("%c", toupper(txt[i+1]));
            
        }
}