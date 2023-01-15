#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main()
{
    int dizi[3][3];
    int enbuyuk = 0;

    srand(time(NULL));
    
    printf("\n\n***DIZININ GORUNTUSU***\n\n");

    for(int i = 0 ; i < 3 ; i++)   // matrisi oluşturmak için döngü...
    {
        for(int j = 0 ; j < 3 ; j++)  
        {
            dizi[i][j] = rand()%10;
            
            if(dizi[i][j] > enbuyuk)  // en büyük eleman atama işlemi
            {
                enbuyuk = dizi[i][j];                
            }
            printf("%d\t",dizi[i][j]);
        }
        printf("\n");
    }

    printf("\ndizinin en buyuk elemani = %d",enbuyuk);

}