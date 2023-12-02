#include <stdio.h>
#include <stdlib.h>


//Write a program to count the number of 1’s in an unsigned
//32-bit integer.
int main()
{
    unsigned int i;
    unsigned int Num;
    unsigned int count=0;
    printf("Enter Number in decimal: ");
    scanf("%d",&Num);
    for(i=1<<31;i>0;i=i/2)
    {

        if(i&Num)
        {
            count +=1;
        }

    }
    printf("Number of 1's in integer = %d",count);
    return 0;
}
