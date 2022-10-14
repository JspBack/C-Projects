#include <stdio.h>
#include <conio.h>

int Factorial(int input);
int main(void){
	
	int fn, sn;
	
	printf("Enter first number:");
	scanf("%d", &fn);
	
	printf("Enter second number:");
	scanf("%d", &sn);
	    
	printf("Factorial of %d is %d", fn, Factorial(fn));
	printf("\nFactorial of %d is %d", sn, Factorial(sn));

	getch();
}
int Factorial(int input)
{
	int fact =1, i;
	for (i = 1; i <= input; i++)
	   fact = fact*i;
	return fact;
}
