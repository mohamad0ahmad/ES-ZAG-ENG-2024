#include <stdio.h>
#include <stdlib.h>

/*Write a C code that ask the user to enter 10 values and save
them in an array using a for loop. Then print the minimum and the
maximum of the values.*/

int NumbersArray[10];
int main()
{

    for(int i=0; i<10; i++)
    {
        printf("Enter The %d  Number in Array: ",i);
        scanf("%d",&NumbersArray[i]);
    }
    int Min,Max;
    Max=Min=NumbersArray[0];
    for(int i=1; i<10; i++)
    {
        if(NumbersArray[i]>Max)
        {
            Max =NumbersArray[i];
        }
        else if(NumbersArray[i]<Min)
        {
            Min =NumbersArray[i];
        }
    }
    printf("\nMax Num is: %d",Max);
    printf("\nMin Num is: %d",Min);



    return 0;
}
