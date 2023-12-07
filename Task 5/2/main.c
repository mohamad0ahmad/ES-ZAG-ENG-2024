#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num;
    while(1)
    {
    printf("Enter A number: ");
    scanf("%d",&Num);
    if((Num%3)&&(Num%5)&&(Num%2))
    {
        printf("%d is a prime number \n\n",Num);
    }
    else
    {
        printf("%d isn't a prime number\n\n",Num);
    }
    }
    return 0;
}
