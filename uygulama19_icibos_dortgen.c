
// Yıldızlarla dörtgen yapılacak ve sadece kenarlarda yıldızlar olacak.
#include<stdio.h>
#include <conio.h>

int dortgen(int en,int boy) // Fonksiyon değişkenleri tanımlanıyor.
{
	
int i,j,k; // Döngü değişkenleri tanımlanıyor.
			
for(i=0;i<en;i++) // İlk satıra en kadar * koy.
{
	printf("* ");
	
}	

printf("\n"); // Alt satıra geç		

for(j=0;j<boy-2;j++)  // Boy -2 kadar saymaya başla
{
	
printf("* ");	// Yıldız koy
	
	for(k=0;k<en-2;k++)  // En - 2 kadar iki boşluk koy
	{
		
		printf("  ");
	}
	
printf("* ");  // yıldız koy ve alt satıra geç
printf("\n");
}			

for(i=0;i<en;i++) // Son satıra en kadar yıldız koy
{
	printf("* ");	
}			
	
	return i;	// i'ye dön
}



int main() {
	
	int en,boy;  // En boy tanımlanıyor.
	
printf("En Girin: ");
scanf("%d",&en);		// En okundu.
printf("Boy Girin: ");
scanf("%d",&boy);	   // boy okundu.
		
printf("\n");  // Alt satıra geçildi

dortgen(en,boy);  // Fonksiyon Çağırılıyor.
	
}