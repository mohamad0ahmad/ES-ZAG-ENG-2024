#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Write C program to print Floyd's triangle

    int i,j,n,x=1;
    printf("Enter number of rows of Floyd's triangle to print: \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",x);
            x++;
        };
        printf("\n");
    }
    return 0;
}
