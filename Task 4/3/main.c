#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //write a program to print the binary representation of a
    //number, try not to print zeros on the left (5->print 101).

    unsigned int i;
    unsigned int Num;
    printf("Enter Number in decimal: ");
    scanf("%d",&Num);
    unsigned int NumOfDigits =(int)floor(log2(Num));
    for(i=1<<(NumOfDigits);i>0;i=i/2)
    {

        if(i&Num)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }


    return 0;
}


