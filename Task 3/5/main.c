#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write a program that uses a while loop to calculate the factorial of a number entered by the user.
    int N,i,result=1;

    printf("Enter a number: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        result *=i;
    }
    printf("%d!=%d",N,result);
    return 0;
}
