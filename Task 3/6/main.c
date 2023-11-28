#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,min,max,i,x;
    printf("How many numbers you want to compare: ");
    scanf("%d",&n);
    printf("Enter a number: ");
    scanf("%d",&min);
    max=min;
    n -=1;
    for(i=1;i<=n;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&x);
        if(x>max)
        {
            max =x;
        }
        else if(x<min)
        {
            min =x;
        }
    }
    printf("Max number is %d \nMin number is %d",max,min);
    return 0;
}
