#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a C program to take a number and a character from user if the number
    //is even print the same character, if the number is odd
    //print the other case of the character (a->A, B->b)
    int Num,character;
    printf("Enter a number: ");
    scanf("%d",&Num);
    printf("Enter a character: ");
    scanf(" %c",&character);
    if(Num%2==0)
    {
        printf("Character is %c",character);
    }
    else
    {
        if(character>96)
        {
            printf("Character is %c",(character-32));
        }
        else
        {
            printf("Character is %c",(character+32));
        }
    }


    return 0;
}
