/*basamak sayisi = us 
basamak sayisini bul
basamaklari ayikla 1234 >>>> 1, 2, 3, 4...
her basamak icin: basamak^us = sayi ise; armstrong sayisi
*/
#include<stdio.h>
#include<math.h>
int main(){
  int sayi,toplam=0, kalan,b,a,bsmk,sayi2;
  printf("LUTFEN ARMSTRONG SAYISININ INCELENECEGI ARALIGI GIRINIZ:\n");
  scanf("%d%d",&sayi,&sayi2);
printf("\n(%d,%d) ARALIGINDAKI ARMSTRONG SAYILARI:",sayi,sayi2);

for(int i=sayi; i<=sayi2; i++){
a=i;
b=i;
int us=0;
int toplam=0;
while(a!=0)
{
  kalan=a%10;
  a=a/10;
  us=us+1;
        
}
    while(b!=0)
    {
        bsmk=b%10;
        toplam=toplam+pow(bsmk,us);
                b=b/10;
    }
        if(i==toplam)
printf("\n%d",i);
    }//for kivircik

}