#include<stdio.h>

int main(){

int sayi,son;
printf("\nbir sayi giriniz: ");
scanf("%d",&sayi);

son = sayi%9;

   if(son == 0){
    printf("\n");
    printf("sayiniz 9'a tam bolunuyor.\n\n");
   }
else{
   printf("\n");
   printf("sayiniz 9'a bolunmuyor\n\n");
   printf("sayinizin 9 ile bolumunden kalan: %d\n\n",son);
}

return 0;  
} 
