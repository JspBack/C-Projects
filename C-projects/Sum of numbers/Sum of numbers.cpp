#include<stdio.h>
#include<conio.h>

int main(void){
	int input, i , sum = 0;
	
	printf("Enter a number:");
	scanf("%d", &input);
	
	for(i =1; i <= input; i++)
	sum = sum + i;
	
	printf("Sum of %d natural number : %d", input, sum);
	
	getch();
}

