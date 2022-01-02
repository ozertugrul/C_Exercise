/*

GIRILEN SAYININ ARMSTRONG SAYISI OLUP OLMADIGINI BELIRLEYEN C ALGORITMASI

*/
#include<stdio.h>
#include<math.h>
int main(){
  int sayi,toplam=0, kalan,b, a,us=0,bsmk;
  printf("PLEASE LET ME A NUMBER!:");
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
printf("\nTHAT'S AN ARMSTRONG NUMBER!");
else 
printf("\nTHIS IS NOT AN  ARMSTRONG NUMBER!");
}
