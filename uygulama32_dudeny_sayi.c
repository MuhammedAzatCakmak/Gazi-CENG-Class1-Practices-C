#include<stdio.h>

//Bir Dudeney sayısı basamaklarının sayı değerleri toplamının küpü kendisine eşit olan sayma sayısıdır.

int main()
{
    int sayi,toplam = 0,kup,birler,onlar,yuzler;

    printf("3 basamakli bir sayi giriniz : ");
    scanf("%d",&sayi);

    birler = sayi%10;
    onlar = (sayi%100 - birler)/10;
    yuzler = (sayi%1000 - sayi%100)/100;

    toplam = birler+onlar+yuzler;
    kup = toplam*toplam*toplam;

    printf("\nsayinin sayi degerleri toplami = %d\n",toplam);

    if(kup == sayi)
    {
        printf("girdiginiz sayi bir dudeny sayisidir");
    }
    else
    {
        printf("girdiginiz sayi dudeny sayisi degildir");
    }    
}