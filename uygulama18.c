
/*
Ad Soyad :  MUHAMMED AZAT ÇAKMAK
Numara   :  22181616055
Şube     :  2.ŞUBE
*/



#include<stdio.h>
#include<stdlib.h>


int matris()
{
    int matris1[5][4];
    int matris2[5][4]; 
    int toplam[5][4];
    char i,j;


printf("\n\n");          
printf("*****MATRiS 1*****");
printf("\n");


    for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                matris1[i][j] = rand()%100+1;
                printf("%d\t",matris1[i][j]);
            }
            printf("\n");
        }


printf("\n\n\n");           
printf("*****MATRiS 2*****");
printf("\n");        


    for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
            {
                matris2[i][j] = rand()%100+1;
                printf("%d\t",matris2[i][j]);      
            }
            printf("\n");
        }

printf("\n\n\n");
printf("*****MATRiSLERiN TOPLAMI*****");
printf("\n");


        for(i=0;i<5;i++)
         {
             for(j=0;j<4;j++)
             {
               toplam[i][j] = matris1[i][j] + matris2[i][j];
               printf("%d\t",toplam[i][j]);
             }
                  printf("\n"); 
         }

         return toplam[i][j];

}


int main()
{
    matris();   
}