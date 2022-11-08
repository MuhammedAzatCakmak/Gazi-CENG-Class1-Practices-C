#include<stdio.h>

int main(){

int sayi,x;
int enBuyuk;
enBuyuk = 0;

for(sayi = 1 ; sayi <= 5 ; sayi++){
    printf("sayi%d : ",sayi);
    scanf("%d",&x);
    if(x > enBuyuk){
       enBuyuk = x;
    }
}
    
    printf("girdiginiz sayilardan en buyugu: %d",enBuyuk);



}