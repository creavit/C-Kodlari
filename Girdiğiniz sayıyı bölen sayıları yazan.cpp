#include <stdio.h>
#include <conio.h>
main()
{
int sayi, sayac;
printf("Bir sayi girniz : ");
scanf("%d", &sayi);

if(sayi<0)
printf(" \n - Deger girilemez.");

for(int i=2 ; i < sayi ; i++)



if(sayi%i==0)

{
sayac++ ;
printf(" \n %d",i );
}

else if

(sayac==0)

printf(" \n Sayi asal");







getch();
}
