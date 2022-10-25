#include<stdio.h>
#include<conio.h>

int main (){
	int a= 0,d1,d2,d3,d4,back;
	printf("Yeni bir þifre belirleyiniz:");
	scanf("%d",&a);
	back = a;
	if (a > 999 && a<9999){
	 	printf("girdiðiniz deger 4 basamaklý");
	 	
	 	d1 = a%10;
	 	a = a/10;
	 	d2 = a%10;
	 	a = a/10;
	 	d3 = a%10;
	 	a = a/10;
	 	d4 = a%10;
	 	
	 	if( d1==d2 && d1==d3 && d1==d4 && d2==d3 && d3==d4){
	 		printf("sifreniz tekrar ediyor");}
		else{
			printf("password %d is ok", back);
		}
	 	
    }   	
	else{
	 printf("girdiðiniz deðer 4 basamaklý deðil");
	}	
	getch();	
}


