#include<stdio.h>
#include<string.h>

struct bilgiler
{
    char isim1[20];
    char isim2[20];
    char soyisim[20];
    int yas;
    char cinsiyet[20];
}person1;

int main()
{

int isimsayisi;

printf("KAC ISIMLISINIZ ? : ");
scanf("%d",&isimsayisi);
printf("\n");

if(isimsayisi == 1)
{
    printf("Adiniz : ");
    scanf("%s",&person1.isim1);
    
    printf("Soyadiniz : ");
    scanf("%s",&person1.soyisim);
    
    printf("Cinsiyetiniz : ");
    scanf("%s",&person1.cinsiyet);
    
    printf("Yasiniz : ");
    scanf("%d",&person1.yas);
}

if(isimsayisi == 2)
{
    printf("1. Adiniz : ");
    scanf("%s",&person1.isim1);
    
    printf("2. Adiniz : ");
    scanf("%s",&person1.isim2);
    
    printf("Soyadiniz : ");
    scanf("%s",&person1.soyisim);
    
    printf("Cinsiyetiniz : ");
    scanf("%s",&person1.cinsiyet);
    
    printf("Yasiniz : ");
    scanf("%d",&person1.yas);
}

}   