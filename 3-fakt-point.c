#include<stdio.h>
int fonk(int sayi)
{
	int sonuc=1,*pa;
 pa=&sayi;
	for(int i=*pa;i>=1;i--)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}
main()
{
	int sayi;
	printf("Lutfen faktoriyelini hesaplamak isteidginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	fonk(sayi);
	int sonuc = fonk(sayi);
	printf("%d!: %d",sayi,sonuc);
}