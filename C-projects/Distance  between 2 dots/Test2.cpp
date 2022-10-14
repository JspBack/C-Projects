#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(void){
	float x1,x2,y1,y2,d1,d2,f1,f2,g1;
	printf("ilk nokta icin x degerini girin:");
	scanf("%f",&x1);
	printf("ilk nokta icin y degerini girin:");
	scanf("%f",&y1);
	printf("ikinci nokta icin x degerini girin:");
	scanf("%f",&x2);
	printf("ikýnci nokta için y degerni girin:");
	scanf("%f",&y2);
    
    d1=abs(x1)-abs(x2);
    d2=abs(y1)-abs(y2);
    f1=d1*d1;
    f2=d2*d2;
    g1=sqrt(f1+f2);

    printf("iki noktanin birbirine uzakligi %f", g1);
    getch();	
}
