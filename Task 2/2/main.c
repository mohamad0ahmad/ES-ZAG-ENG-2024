#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Enter 1st number \n");
    scanf("%d", &A);

    printf("Enter 2nd number \n");
    scanf("%d", &B);

    printf("Enter 3rd number \n");
    scanf("%d", &C);


    int min, max;

    min=max=A;

    if (B < min) {
        min = B;
    } else if (B > max) {
        max = B;
    }

    if (C < min) {
        min = C;
    } else if (C > max) {
        max = C;
    }

    printf("Minimum is %d\n", min);
    printf("Maximum is %d\n", max);

    return 0;
}
