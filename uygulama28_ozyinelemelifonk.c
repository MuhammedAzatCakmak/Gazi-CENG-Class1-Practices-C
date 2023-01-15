#include<stdio.h>

int fonk(int x)
{

    if(x==0)
    
        return 0;
    

    else if(x==1)
    
        return 1;
    
    return fonk(x-1)+fonk(x-2);

}

int main()
{
    int sayi;
    int sonuc;
    printf("bir sayi giriniz : ");
    scanf("%d",&sayi);

    sonuc = fonk(sayi);

    printf("%d.eleman : %d\t",sayi,sonuc);

}