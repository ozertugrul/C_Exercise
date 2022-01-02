#include<stdio.h>
int byk(int d1[],int boyut)
{
    if(boyut==1)
	{
		return d1[0];
	}   		
	else
	{
	int en=byk(d1,boyut-1);
    if(d1[boyut-1]>en)
	{
	return d1[boyut-1]; 	
	}
     
	return en;		

}
}
main() {
    int N;

    printf("Lutfen kac elemanli bir dizi olusturmak istediginizi giriniz:\n");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0; i<N; i++)
    {
      printf("Dizinin %d. elemani:\t",i+1);
      scanf("%d",&dizi[i]);  
    }
    
    for(int i=0; i<N; i++)
    {
       byk(dizi,N);
    }
    int b=byk(dizi,N);
    printf("En byk: %d",b);
}