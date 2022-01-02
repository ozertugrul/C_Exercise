/*basamak sayisi = us 
basamak sayisini bul
basamaklari ayikla 1234 >>>> 1, 2, 3, 4...
her basamak icin: basamak^us = sayi ise; armstrong sayisi
*/
#include<stdio.h>
#include<math.h>
int main(){
  int sayi,toplam=0, kalan,b, a,us=0,bsmk;
  printf("LUTFEN ARMSTRONG SAYISI ADAYINI GIRINIZ:");
  scanf("\n%d",&sayi);
  a=sayi;
  b=sayi;
while(a!=0){
  kalan=a%10;
  a=a/10;
  us=us+1;
        
}
    printf("\n us :%d", us);
    while(b!=0){
        bsmk=b%10;
        printf("\nbasamaklar :%d",bsmk);
        toplam=toplam+pow(bsmk,us);
                b=b/10;
    }
    printf("\ntoplam: %d",toplam);

if(sayi==toplam)
printf("\nBU SAYI ARMSTRONG SAYIDIR!");
else 
printf("\nBU SAYI ARMSTRONG SAYI DEGILDIR!");
}