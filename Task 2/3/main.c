#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C, D, Res;


    printf("Enter four numbers separated by spaces: \n");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    Res = (A * B) - (C * D);

    printf("Result of the equation: %d\n", Res);

    return 0;
}
