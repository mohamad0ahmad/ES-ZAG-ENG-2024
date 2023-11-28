#include <stdio.h>
#include <stdlib.h>


//Write a C program that takes 5 inputs and prints the numbers that are divisible by 3


int main()
{
    int a,b,c,d,e;
    printf("Enter 1st Number:\n");
    scanf("%d",&a);
    printf("Enter 2nd Number:\n");
    scanf("%d",&b);
    printf("Enter 3rd Number:\n");
    scanf("%d",&c);
    printf("Enter 4th Number:\n");
    scanf("%d",&d);
    printf("Enter 5th Number:\n");
    scanf("%d",&e);

    if(a%3==0||b%3==0||c%3==0||d%3==0||e%3==0)
        {
    printf("numbers that can be  divided by 3 are: \n");

    if(a%3==0) {printf("%d\n",a);};

    if(b%3==0){printf("%d\n",b);};

    if(c%3==0){printf("%d\n",c);};

    if(d%3==0){printf("%d\n",d);};

    if(e%3==0){printf("%d\n",e);};

    }

    else
        {printf("No Number Can Be divided by 3 -_- ");

    };


    return 0;
}
