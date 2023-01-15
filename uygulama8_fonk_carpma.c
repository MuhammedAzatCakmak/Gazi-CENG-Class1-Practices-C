#include<stdio.h>

int carpim(int sayi1,int sayi2,int sayi3)
{
    int carpma;

    printf("1.sayi : ");
    scanf("%d",&sayi1);

    printf("2.sayi : ");
    scanf("%d",&sayi2);

    printf("3.sayi : ");
    scanf("%d",&sayi3);

    carpma = sayi1*sayi2*sayi3; 

    return carpma;

}

int main()
{
    int sayi1, sayi2, sayi3;
    printf("sayilarin carpimi : %d",carpim(sayi1,sayi2,sayi3));
}