#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a program that uses a for loop to print the numbers from input "A" to input "B" to the screen.

    int A,B;
    printf("Enter A (lowest number) :\n");
    scanf("%d",&A);
    printf("Enter B:\n");
    scanf("%d",&B);
    if(A<B)
    {
        for(A;A<=B;A++)
        {
            printf("%d\n",A);
        }

    }
    else
    {
        printf("Error B>=A");

    }
    return 0;
}
