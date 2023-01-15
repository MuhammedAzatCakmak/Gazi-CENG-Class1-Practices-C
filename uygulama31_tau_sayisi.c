#include<stdio.h>

//Tau sayisi bir sayının, pozitif tam bölenlerinin sayısına tam bölünebilen sayılara denir.

int main()
{
    
    short sayi,sayac = 0;
    printf("\n\nBir sayi giriniz : ");
    scanf("%d",&sayi);

    for(int i = 1 ; i <= sayi ; i++)
    {
        if((sayi%i) == 0)
        {
            sayac++;
        }
    }

    printf("sayinin pozitif tam bolenlerinin sayisi : %d\n",sayac);

    if((sayi%sayac) == 0)
    {
        printf("girdiginiz sayi bir tau sayisidir\n\n");
    }
    else
    {
        printf("giridiginiz sayi tau sayisi degildir\n\n");
    }
}