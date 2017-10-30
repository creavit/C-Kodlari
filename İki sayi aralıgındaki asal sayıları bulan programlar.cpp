#include <stdio.h>
#include <conio.h>
main(){
	int kucuk,buyuk,sayac;
	
	printf("Sayi araligindaki en kucuk sayi : ");
scanf("%d",&kucuk);

printf("Sayi araligindaki en buyuk sayi : ");
scanf("%d",&buyuk);
if(kucuk>buyuk)
printf("Haci gavatlik yapma");

for (int i=kucuk;i<=buyuk;i++)
{
for(int x=2;x<i;x++)
	if(i%x==0)
	{
	sayac++;	
	}
	if(sayac==0)
	printf("\n sayý %d = sayý asaldýr",i);
	else
	{
		sayac=0;
	}
}

}
