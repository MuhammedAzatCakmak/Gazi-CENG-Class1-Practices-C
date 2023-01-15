#include<stdio.h>

int carpma()
{

int sayi1 = 5,sayi2,i,sonuc,carpim;

for(i = 1 ; i <= sayi1 ; i++)
{
printf("%d.sayiyi giriniz : ",i);
scanf("%d",&sayi2);
sonuc *= sayi2;
}

carpim = (-sonuc)/2;

return carpim;

}

int main()
{
    printf("Girdiginiz sayilarin carpimi : %d",carpma());
}