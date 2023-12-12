#include <stdio.h>


int main()
{
    int N;
    int arr[N];
    int Sum;
    scanf("%d",&N);

    for(int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i < N; i++){
    Sum+=arr[i];
    }
    printf("%d",Sum);

    return 0;
}
