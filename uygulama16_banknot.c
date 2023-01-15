//sayi girilecek 10 20 50 ve 100 var
//büyük banknotlar max sayıda olacak şekilde
//banknot çeşitlerinden kaçar tane girilmiş onu yazdır
//örnek : 2430 = 24 tane 100 , 1 tane 20 , 1 tane 10

#include <stdio.h>

int main()
{

int sayi = 0 , sayikalan = 0 , sayi100,sayi50,sayi20,sayi10;
int adet100 = 0,adet50 = 0,adet20 = 0,adet10 = 0;

printf("Lutfen Cekmek Istediginiz Tutari Giriniz : ");
scanf("%d",&sayi);
 
if(sayi%10 != 0)
{
    printf("Lutfen 10'un Katlarini Giriniz!");
}

adet100 = sayi/100;
sayikalan = sayi-(adet100*100);

adet50 = sayikalan/50;
sayikalan = sayikalan-(adet50*50);

adet20 = sayikalan/20;
sayikalan = sayikalan-(adet20*20);

adet10 = sayikalan/10;
sayikalan = sayikalan-(adet10*10);

printf("Girdiginiz miktara gore bankamizin size verecegi banknotlar : %d adet 100'luk, ",adet100);
printf("%d adet 50'lik, ",adet50);
printf("%d adet 20'lik ve ",adet20);
printf("%d adet 10'luktur.",adet10);

}