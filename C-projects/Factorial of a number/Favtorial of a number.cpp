#include <stdio.h>
#include <conio.h>

int main(void){
	int input, i, fact = 1;
	printf("Enter a number:");
	scanf("%d", &input);
	
	for (i=1; i <= input; i++)
	     fact = fact*i;
	
	printf("Factorial of %d is %d", input, fact);
	
	getch();
}
