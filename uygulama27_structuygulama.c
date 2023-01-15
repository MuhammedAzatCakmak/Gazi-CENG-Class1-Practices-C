#include<stdio.h>

struct bilgiler
{
    char isim[20];
    char soyisim[20];
    int yas;
    int numara;
}kisi1,kisi2;


int main()
{
    struct bilgiler kisi1 = {"azat","cakmak",19,055};
    struct bilgiler kisi2 = {"mehmet","simsek",24,056};

    printf("%s %s %d %d\n",kisi1.isim,kisi1.soyisim,kisi1.yas,kisi1.numara);
    printf("%s %s %d %d",kisi2.isim,kisi2.soyisim,kisi2.yas,kisi2.numara);
}