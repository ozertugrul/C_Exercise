#include<stdio.h>
void byk(int dizi[],int boyut)
{
    int enb=-9999;
    int *penb;
    penb=&enb;
       for(int i=0; i<boyut; i++)
       {
        if(enb<dizi[i])
        {
            enb=dizi[i];
        }
       }
    
        printf("\nEn buyuk: %d\t\n",*penb);
}
main() {
    int N;

    printf("Lutfen kac elemanli bir dizi olusturmak istediginizi giriniz:\n");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0; i<N; i++)
    {
      printf("Dizinin %d. elemani:\n",i+1);
      scanf("%d",&dizi[i]);  
    }
    
    for(int i=0; i<N; i++)
    {
       byk(dizi,N);
    }
}
/* 
  deger yukari gitti (i)
  sonraki deger bir oncekinden buyukse iceri gir ve yeni en buyuk o olsun
  i2>i1 ise yeni buyuk deger i2 olmali
  eger geklen sonraki deger i2den buyuk degilse iceri girme
  eger gelen deger i2 den buyukse adim 3e git  
  */