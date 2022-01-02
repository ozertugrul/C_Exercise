#include<stdio.h>
#include<math.h>

int arms(int N)
{
    int toplam=0,us=0,a,b,kalan,bsmk;
    a=N;
    b=N;
    while(a!=0) {
        kalan=a%10;
        us=us+1;
        a=a/10;
    }
    while(b!=0) {
        bsmk=b%10;
        toplam=toplam+pow(bsmk,us);
        b=b/10;
    }
    if(toplam==N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
main() {
    int N,sonuc;
    printf("Lutfen bir sayi giriniz: \n");
    scanf("%d",&N);
    sonuc=arms(N);
    if(sonuc==1)
    {
        printf("Armstrong sayisi!");
    }
    else
    {
        printf("Armstrong sayisi degil!");
    }
    return 0;


}