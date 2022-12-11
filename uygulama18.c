
/*
Ad Soyad :  MUHAMMED AZAT ÇAKMAK
Numara   :  22181616055
Şube     :  2.ŞUBE
*/



#include<stdio.h>
#include<stdlib.h>
#define SAT 5
#define SUT 4


int matris_yazdir(short matris[SAT][SUT])
{
    for(int i = 0 ; i < SAT ; i++)
    {
        for (int j = 0 ; j < SUT ; j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

    return matris[SAT][SUT];
}

int main()
{
    short matrisA[SAT][SUT] , matrisB[SAT][SUT] , matrisT[SAT][SUT];

    rand()%100;

    for(int i = 0 ; i < SAT ; i++)
        {
            for (int j = 0 ; j < SUT ; j++)
            {
                matrisA[i][j] = rand()%100;
            }

        }


        for(int i = 0 ; i < SAT ; i++)
        {
            for (int j = 0 ; j < SUT ; j++)
            {
                matrisB[i][j] = rand()%100;
            }

        }
        
        printf("\n\n***MATRIS A***\n");
        matris_yazdir(matrisA);
        printf("\n");
        printf("\n***MATRIS B***\n");
        matris_yazdir(matrisB);
        printf("\n");


        for(int i = 0 ; i < SAT ; i++)
        {
            for (int j = 0 ; j < SUT ; j++)
            {
                matrisT[i][j] = matrisA[i][j] + matrisB[i][j];
            }

        }


        printf("\n***MATRISLERIN TOPLAMI***\n");
        matris_yazdir(matrisT);
        return 0;

}        


