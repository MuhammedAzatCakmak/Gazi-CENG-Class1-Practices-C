#include<stdio.h>

int seritoplama(int sayi)
{
    int i,toplam = 0;

    for(i = 0 ; i <= sayi ; i++)
    {
        toplam = i + toplam;
    }

    return toplam;
}

int main()
{
    int sayi;

    printf("bir sayi giriniz : ");
    scanf("%d",&sayi);

    printf("seri toplama isleminin sonucu : %d",seritoplama(sayi));

}