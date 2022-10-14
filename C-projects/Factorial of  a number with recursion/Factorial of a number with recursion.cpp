#include <stdio.h>
#include <conio.h>

int Factorial(int input);
int main(void){
	
	int n;
	
	printf("Enter first number:");
	scanf("%d", &n);	
	    
	printf("Factorial of %d is %d", n, Factorial(n));

	getch();
}
int Factorial(int input)
{
	if(input ==0)
	  return 1;
	  
	else
	  return input*Factorial(input - 1);
}
