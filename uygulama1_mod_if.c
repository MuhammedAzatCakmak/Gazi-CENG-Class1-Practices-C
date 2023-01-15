#include<stdio.h>

int main(){

/*bir sayının 9 ile kalanı bulmak için sayının her bir basamağının sayı değerini bulduktan sonra bu sayı değerlerini
toplayıp 9'a bölerek buluruz. 
herhangi bir 4 basamaklı abcd sayısı alınız ve bu sayının 9 ile kalanını bulunuz.
*/
int sayi,a,b,c,d,birler,onlar,yuzler,binler,kalan;
printf("4 basamakli bir sayi giriniz: ");
scanf("%d", &sayi);

birler = sayi%10;
onlar = ((sayi%100)-birler)/10;
yuzler = ((sayi%1000)-(sayi%100))/100;
binler = ((sayi%10000)-(sayi%1000))/1000;

a = binler;
b = yuzler;
c = onlar;
d = birler;

int son = (a+b+c+d)%9;

if(son == 0){
    printf("sayiniz 9'a tam bolunuyor");
}
else{
   printf("sayiniz 9'a bolunmuyor\n");
   printf("satyinizin 9 ile bolumunden kalan: %d",son);
}

return 0;  
}