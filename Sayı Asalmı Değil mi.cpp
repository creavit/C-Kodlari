#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
main() {
	int x,sayac;
	printf("Sayiyi gir: ");
	scanf("%d",&x);
	for(int y=1;y<x;y++)
	
		if (x%y==0)
	sayac++;
	if (sayac>=1)
		printf("Sayi asal");
		else 
		printf("Asal degil");

	
	getch();
}
