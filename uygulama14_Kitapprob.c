//her gün bir önceki günden 5 sf fazla okuyacak 
//ilk gün 10 toplam 1000 sf

#include<stdio.h>

int main()
{
    int okunansf = 10,gun = 1,toplam = 0;

    do
    {
        okunansf += 5;
        toplam += okunansf;
        gun++;

    }while(toplam < 1000);

    printf("kitap okunan gun sayisi : %d\n",gun);
}

