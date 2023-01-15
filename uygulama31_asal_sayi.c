#include<stdio.h>

int main()
{
int sayi, sayac = 0;

printf("SAYI GIR: ");
scanf("%d", &sayi);

int x = 0;

for(x = 2; x < sayi; x++)
{ 
    if (sayi % x == 0)
    {
        sayac++;
    }
}

if(sayac == 0)
{
    printf("ASAL SAYI");
}
else
{
    printf("ASAL SAYI DEGIL!");
}

}
