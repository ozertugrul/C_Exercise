/*

DIZININ EN BUYUK ELEMANINI POINTER ILE BULAN C ALGOTIRMASI

*/
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
    
        printf("\nTHE BIGGEST: %d\t\n",*penb);
}
main() {
    int N;

    printf("PLEASE GIVE ME A NUMBER FOR STRING SIZE:\n");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0; i<N; i++)
    {
      printf("%d. STRING MEMBER:\n",i+1);
      scanf("%d",&dizi[i]);  
    }
    
    for(int i=0; i<N; i++)
    {
       byk(dizi,N);
    }
}
