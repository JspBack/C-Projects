#include <stdio.h>
#include <conio.h>
//I did it hahaaha
//for read nnumber and print multiplications of that number
int main(void)
{
	int input, i;
	printf ("Enter a numebr:");
	scanf ("%d", &input);
	
	for (i =1; i <=10; i++)
	   printf("\n%dx%d=%d", input, i, input*i);
	
	getch();
	   
	}
