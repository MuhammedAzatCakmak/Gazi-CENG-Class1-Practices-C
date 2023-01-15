#include<stdio.h>

// 1-100 arasındaki tek ve çift sayıların sayısını ekrana yazdıran kod.

int tek,cift,adettek,adetcift;

int main()
{
    for (int i = 1 ; i <= 100 ; i++)
    {
        if(i%2 == 0)
        {
            adetcift++;
        }
        else
        {
            adettek++;
        }
    }

    printf("tek sayilarin adedi : %d , cift sayilarin adedi : %d",adettek,adetcift);
}