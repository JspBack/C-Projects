#include <stdio.h>  
#include <conio.h>
// Get the GCD of two numbers  
int gcd_Num ( int x, int y)  
{  
    int i;   
    for( i = x; i >= 1; i --)  
    {   // largest number that completely divides both number  
        if( x % i == 0 && y % i == 0)  
            break;   
    }  
    return i;     
}    
int main(void)  
{  
    // declaration of the variables  
    int n1, n2 = -1;  
    printf (" Enter N numbers from the users ( 0 to exists from the loop) \n");  
    while ( 1)  
    {  
        scanf ( "%d", &n1); // A while loop continuously accepts the number   
        if ( n1 < 1) // n1 should be larger than 1   
            break;   
              
              
        else if ( n2 == -1)   
            n2 = n1; // assign the value of n1 to n2  
        else if(n1 < n2)  
            n2 = gcd_Num(n1, n2); // assign the function into the n2  
        else  
            n2 = gcd_Num( n2, n2); // else it stores the function value into the n2  
    }  
    printf (" \n GCD of all entered number is: %d", n2);  
    getch();  
}  
  
