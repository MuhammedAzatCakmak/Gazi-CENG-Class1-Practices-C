#include<stdio.h>

float ortalamabul(int dizi[5])
{
   int toplam = 0;
   float ort;
 
for(int k = 0 ; k < 5 ; k++)
   {
    toplam += dizi[k];
   }

ort = toplam/5;
return ort;

}


int main()
{
  int i,dizi[5];
  for(i = 0 ; i < 5 ; i++)
  {
    printf("%d. sayiyi giriniz : ",(i+1));
    scanf("%d",&dizi[i]);
  }

  printf("ortalama = %.2f",ortalamabul(dizi));
}