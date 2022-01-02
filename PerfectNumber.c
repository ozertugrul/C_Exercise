/*

GIRILEN SAYININ MUKEMMEL SAYI OLUP OLMADIGINI ARASTIRAN C ALGORITMASI

*/
#include<stdio.h>
int main(){
    int N, toplam=0;
    printf("Lutfen MUKEMMEL SAYI adayini giriniz:\n");
    scanf("%d",&N);
    for(int i=1; i<N; i++){
        if(N%i==0){
            toplam=toplam+i;
            printf("%d",-i);
        }
     }
    if(toplam==N){
       printf("\n%d THAT'S NUMBER IS PERFECT! ",N);
    }
    else{
        printf("\n%d THIS NUMBER IS NOT PERFECT! ",N);
    }
    
}
