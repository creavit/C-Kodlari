// 300 320
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	int sayi;
srand(time(NULL));

	for(int i=0;i<=5;i++)
	
	{
	sayi=rand() %20 +300;
		printf(" \n Sayiniz : %d \n ",sayi);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
