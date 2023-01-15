#include<stdio.h>


int carpma(int x,int y)
{
    if(y==0)
    return 0;

    return x + carpma(x,y-1);
}


int main()
{
    int x,y;
    
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);

    int sonuc = carpma(x,y);

    printf("%d*%d = %d",x,y,sonuc);
}