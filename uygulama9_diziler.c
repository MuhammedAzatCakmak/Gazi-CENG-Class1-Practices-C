#include<stdio.h>

int main(){

int sayilar[10];

int i;

printf("\n");

for(i=0;i<10;i++)
{
    printf("lutfen %d. sayiyi giriniz : ",i+1);
    scanf("%d",&sayilar[i]);
}

for(i = 0; i<10; i++)
{
    printf("\n%d",sayilar[i]);
}


}    