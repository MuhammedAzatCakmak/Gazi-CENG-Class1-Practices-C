#include<stdio.h>

int main(){

float sayi1,sayi2;
int islem;

printf("\nbirinci sayiyi giriniz: ");
scanf("%f",&sayi1);

printf("ikinci sayiyi giriniz: ");
scanf("%f",&sayi2);

printf("1: toplama\n");
printf("2: cikarma\n");
printf("3: carpma\n");
printf("4: bolme\n\n");

printf("bir islem giriniz: ");
scanf("%d",&islem);


switch(islem)
{
case 1: printf("sayilarin toplami: %.2f",sayi1 + sayi2);
break;

case 2: printf("sayilarin farki: %.2f",sayi1 - sayi2);
break;

case 3: printf("sayilarin carpimi: %.2f",sayi1 * sayi2);
break;

case 4: printf("sayilarin bolumu: %.2f",sayi1 / sayi2);
break;

default: printf("Gecerli bir islem girmediniz!!! Lutfen gecerli bir islem giriniz.");
break;
}

}