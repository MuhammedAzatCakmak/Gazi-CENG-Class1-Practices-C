#include<stdio.h>
#include<string.h>

struct bilgiler
{
    char isim[20];
    char soyisim[20];
    int yas;
    char cinsiyet[20];
}ogrenci1,ogrenci2,gecici;

int yerdegistirme()
{
    gecici = ogrenci1;
    ogrenci1 = ogrenci2;
    ogrenci2 = gecici;
}

int main()
{
   printf("*** 1.OGRENCI BILGILERI ***\n");

   printf("Adiniz : ");
   scanf("%s",&ogrenci1.isim);

   printf("Soyadiniz : ");
   scanf("%s",&ogrenci1.soyisim);
   
   printf("Cinsiyetiniz : ");
   scanf("%s",&ogrenci1.cinsiyet);
   
   printf("Yasiniz : ");
   scanf("%d",&ogrenci1.yas);
   printf("\n\n");


   printf("*** 2.OGRENCI BILGILERI ***\n");

   printf("Adiniz : ");
   scanf("%s",&ogrenci2.isim);

   printf("Soyadiniz : ");
   scanf("%s",&ogrenci2.soyisim);

   printf("Cinsiyetiniz : ");
   scanf("%s",&ogrenci2.cinsiyet);

   printf("Yasiniz : ");
   scanf("%d",&ogrenci2.yas);
   printf("\n\n");


   yerdegistirme();

   printf("Adiniz :%s \n",ogrenci1.isim);
   printf("Soyadiniz :%s \n",ogrenci1.soyisim);
   printf("Cinsiyetiniz :%s \n",ogrenci1.cinsiyet);
   printf("Yasiniz :%d \n",ogrenci1.yas);
   printf("\n\n");

   printf("Adiniz :%s \n",ogrenci2.isim);
   printf("Soyadiniz :%s \n",ogrenci2.soyisim);
   printf("Cinsiyetiniz :%s \n",ogrenci2.cinsiyet);
   printf("Yasiniz :%d \n",ogrenci2.yas);



}   