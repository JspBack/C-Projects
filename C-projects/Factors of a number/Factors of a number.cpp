#include<stdio.h>
#include<conio.h>

int main(void){
	int input, i;
	
     printf("Enter a number:");
     scanf("%d", &input);
     
     for (i =1; i <= input; i++){
     	if (input%i==0)
     	 printf("%d, ", i);
	 }
	 
	  getch();
		 
} 
