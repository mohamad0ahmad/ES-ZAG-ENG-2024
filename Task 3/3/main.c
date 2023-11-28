#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    //Write a program to calculate the power of a number. The number and its power are input from user.



    int n,p;
    float result;
    while(1)
    {
        printf("Enter Number:\n");
        scanf("%d",&n);
        printf("Enter Power:\n");
        scanf("%d",&p);

        result=pow(n,p);
        printf("The power %d to the number %d is %f\n",p,n,result);


    }
    return 0;
}
