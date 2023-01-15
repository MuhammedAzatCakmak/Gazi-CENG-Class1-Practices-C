
//10 elemanlı bir dizinin içerisinde kullanıcının girdiği sayıyı ara eğer varsa şu indekste bulundu diye bir mesaj yazdır.

#include<stdio.h>
#include<stdbool.h>

int main()
{

int aranan[10] = {4,66,75,21,14,96,85,47,2,36};

int i,kullanici;
printf("Lutfen bir sayi giriniz : ");
scanf("%d",&kullanici);

bool control = false;

for(i=0;i<10;i++)
{
    if(aranan[i] == kullanici)
    {
        printf("Aradiginiz sayi %d. indekstedir",i);
        control = true;
        break;
    }
}
    if(control == false)
    {
        printf("Girdiginiz sayi dizide bulunmamaktadir");
    }

}



