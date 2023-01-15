/*
Dizinin en büyülk elemanını döndüren fonksiyonu yazınız.
Dizinin en küçük elemanını döndüren fonksiyonu yazınız.
Dizinin ikinci büyük elemanını döndüren fonksiyonu yazınız.
Dizinin ortalama değerinden daha büyük olan değerlerin sayısını döndüren fonsiyonu yazınız.
Dizinin ortalama değerinden daha küçük olan elemanları geri döndüren bir fonksiyon yazınız.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int enbuyukfonk(int dizi[])
{
    int enbuyuk = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        if(enbuyuk < dizi[i])
        {
            enbuyuk = dizi[i];
        }
    }

    return enbuyuk;
}

int enkucukfonk(int dizi[])
{
    int enkucuk = dizi[0];
    
    for(int i = 0 ; i < 5 ; i++)
    {
        if(enkucuk > dizi[i])
        {
            enkucuk = dizi[i];
        }
    }
      
    return enkucuk;
}

int siralanmisfonk(int dizi[],int istenen)
{
    int adet[5] = {0,0,0,0,0};
    int siralanmis[5];

    for(int i = 0; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            if(dizi[i] < dizi[j])
            {
                adet[i]++;
            }
        }

        siralanmis[adet[i]] = dizi[i];
    }

    return siralanmis[istenen - 1];
}

int ortalamadanbuyuk(int dizi[])
{
    int toplam = 0;
    int ortalama = 0;
    int adet = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        toplam += dizi[i]; 
    }
    ortalama = toplam/5;

    for(int k = 0 ; k < 5 ; k++)
    {
        if(dizi[k] > ortalama)
        {
            adet++;
        }
    }

    return adet;
}

int ortalamadankucuk(int dizi[])
{
    int ortalama = 0;
    int adet = 0;
    int toplam = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        toplam += dizi[i];    
    }

    ortalama = toplam/5;
    
    for(int k = 0 ; k < 5 ; k++)
    {
        if(dizi[k] < ortalama)
        {
            adet++;
        }
    }

    return adet;
}

int main()
{
    int dizi[5];
    srand(time(NULL));
    int i; 
    
    printf("DIZININ ELEMANLARI : ");

    for(i = 0 ; i < 5 ; i++)
    {
        dizi[i] = rand()%100;
        printf("\t%d",dizi[i]);        
    }

    printf("\n\n");
    
    printf("DIZININ EN BUYUK ELEMANI : %d\n", enbuyukfonk(dizi));
    printf("DIZININ EN KUCUK ELEMANI : %d\n", enkucukfonk(dizi));
    printf("DIZININ IKINCI EN BUYUK ELEMANI : %d\n",siralanmisfonk(dizi,2));
    printf("DIZININ ARITMETIK ORTALAMASINDAN BUYUK ELEMAN SAYISI : %d\n", ortalamadanbuyuk(dizi));
    printf("DIZININ ARITMETIK ORTALAMASINDAN KUCUK ELEMAN SAYISI : %d", ortalamadankucuk(dizi));

}
