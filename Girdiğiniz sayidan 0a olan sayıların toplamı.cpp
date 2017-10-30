#include <stdio.h>
#include <conio.h>
main()
{
	int i=0 , toplam=0;
	printf("Girdiginiz sayidan 0'a kadar olan sayilarin toplamini bulan program. ");
	printf("\n \n Sayiyi gir: ");
	scanf("%d",&i);	
		if ( i<=0)
	printf("\n \n Gecersiz sayi.");	
	else
	{
	
    for(int b = i ; i >= 0 ; i-- )
    toplam+=i;
    printf("\n \n Sayiniz : %d",toplam);
}
	
	
	
	
	
	
	getch();
}
