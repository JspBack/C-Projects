#include<stdio.h>
#include<conio.h>
int main(void)
{
	printf("Enter two integer, and I will tell you\n");
	printf("the relationship they satisfy: ");
	
	int num1;
	int num2;
	
	scanf( "%d %d", &num1, &num2);
	
	if ( num1==num2 ){
		printf( "%d is equal to %d\n", num1, num2);
	}
	
	if( num1 !=num2 ){
	    printf( "%d is not equal to %d\n", num1, num2);	
	}
	
	if( num1 < num2){
		printf( "%d is less than %d\n", num1, num2);
	}
	
	if( num1 > num2){
		printf( "%d is greater than %d\n", num1, num2);
	}
	
	if (num1 <= num2){
		printf( "%d is less than or equal to %d\n", num1, num2);
	}
	
	if (num1 >= num2){
		printf( "%d is greater than or equal to %d\n", num1, num2);
	}
	getch();
}
