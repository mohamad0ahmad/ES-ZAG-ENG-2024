#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Write a program to reverse a number in decimal representation (1205->5021).
    int n, ReversedNum =0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
    {
        ReversedNum = ReversedNum * 10 + n % 10;
        n /= 10;
    }

    printf("Reversed number = %d", ReversedNum);


    return 0;
}
