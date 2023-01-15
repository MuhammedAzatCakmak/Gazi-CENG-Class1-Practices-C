

//DİZİLER


#include<stdio.h>

int main(){

int sayilar[10];

int i,ciftsayi = 0,teksayi = 0;

printf("\n");

for(i=0;i<10;i++)
{
    printf("lutfen %d. sayiyi giriniz : ",i+1);
    scanf("%d",&sayilar[i]);
}

for(i = 0; i<10; i++)
{
   if(sayilar[i]%2 == 0)
   {
       ciftsayi++;
   }

   else
   {
       teksayi++;
   }
}

printf("\nDizinin icerisinde %d adet tek , %d adet cift sayi vardir",teksayi,ciftsayi);


}    