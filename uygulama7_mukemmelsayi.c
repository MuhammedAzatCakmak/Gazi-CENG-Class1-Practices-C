#include<stdio.h>

int main(){

int sayi,i,toplam = 0;

printf("Lutfen bir sayi giriniz : ");
scanf("%d",&sayi);

for(i = 1 ; i < sayi ; i++)
{
    if(sayi%i == 0)
    {
        toplam += i;
    }
}

if(toplam == sayi)
{
    printf("%d sayisi mukemmel sayidir",sayi);
}
else{
    printf("%d sayisi mukemmel sayi degildir",sayi);
}


}    