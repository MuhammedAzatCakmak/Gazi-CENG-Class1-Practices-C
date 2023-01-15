#include<stdio.h>

int kackez(int dizi[],int aranan)
{
    int sayac = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if(dizi[i] == aranan)
        {
            ++sayac;
        }
    }

    return sayac;

}

int main()

{
    int sayi,dizi[6] = {1,1,2,3,4,5};

printf("sayi giriniz : ");
scanf("%d",&sayi);
printf("%d",kackez(dizi,sayi));
}