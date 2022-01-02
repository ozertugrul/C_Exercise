/*

GIRILEN ARALIKTAKI MUKEMMEL SAYILARI EKRANA YAZDIRAN C ALGORITMASI!

*/
#include<stdio.h>
int main(){
  int a,b;
printf("LUTFEN MUKEMMEL SAYININ ARASTIRILACAGI ARALIGI GIRINIZ:\n");  
scanf("%d",&a);
scanf("%d",&b);
printf("GIRDIGINIZ ARALIKTAKI (%d-%d) MUKEMMEL SAYILAR:\n",a,b);
  for (int i=a; i<=b; i++) 
  {
        int toplam = 0;
        for(int j=1; j<i; j++)
        {
          if(i%j==0)
          {
            toplam = toplam + j;
            }
          }

    if(toplam == i)
    {
      printf("\t%d\n",i );
    }
  }  
}
