#include<stdio.h>

int main(){


int zorluk;
int sayi;

int birler,onlar,yuzler,binler,onbinler;
int ucb,uco,ucy;

int ucbasamakli = 549;


 ucb = ucbasamakli%10;
 uco = (ucbasamakli%100 - birler)/10;
 ucy = (ucbasamakli%10000 - ucbasamakli%100)/100;

birler = sayi%10;
onlar = (sayi%100-birler)/10;
yuzler = (sayi%1000-sayi%100)/100; 
binler = (sayi%10000-sayi%1000)/1000;
onbinler = (sayi%100000-sayi%10000)/10000;


printf("\n\n***ZORLUK SEVIYELERI***\n\n");
printf(" 1 : KOLAY (3 BASAMAKLI)\n 2 : ORTA (4 BASAMAKLI)\n 3 : ZOR (5 BASAMAKLI)\n");
printf("\nBIR ZORLUK SEVIYESI SECINIZ: ");
scanf("%d",&zorluk);


switch(zorluk)
{

    case 1: printf("3 BASAMAKLI SAYI TAHMININIZI GIRINIZ: ");
            scanf("%d",&sayi);

            if(sayi == 549)
            {
                printf("TEBRIKLER GIRDIGINIZ SAYI DOGRU.");
            }

            else if(!(yuzler < 5))
            {
               printf("YUZLER BASAMAGINI %d FAZLA GIRDINIZ ",(yuzler-ucy));
            }


            else
            {
                printf("YUZLER BASAMAGINI %d EKSIK GIRDINIZ");
            }

            




    break;        

    case 2: printf("4 BASAMAKLI SAYI TAHMININIZI GIRINIZ: ");
            scanf("%d",&sayi);
    break;

    case 3: printf("5 BASAMAKLI SAYI TAHMININIZI GIRINIZ: ");
            scanf("%d",&sayi);
    break;

    default: printf("LUTFEN GECERLI BIR ZORLUK SEVIYESI GIRINIZ!");
    break;                            

}







}