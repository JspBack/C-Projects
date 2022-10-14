#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{

    int mynum, usernum;

    srand(time(NULL));
    mynum = rand() % 10;

    printf("I have a number in mind (0 - 9). can you Gues it?\n");

    while (1)
    {
        printf("Enter your Guess : ");
        scanf("%d", &usernum);

        if (mynum == usernum)
        {
            printf("Yes you got it!");
           getch();
           
        }
        else if (mynum > usernum)
        {
            printf("My number is greater than %d. Try Again!\n\n", usernum);
        }
        else
        {
            printf("My number is smaller than %d. Try Again!\n\n", usernum);
        }
    }

    return 0;
  
}

