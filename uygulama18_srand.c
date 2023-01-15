#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int dizi[5];
    srand(time(NULL));

    for(int i = 0 ; i < 5 ; i++)
    {
        dizi[i] = rand()%100;
        printf("%d\t",dizi[i]);
    }

    
}
