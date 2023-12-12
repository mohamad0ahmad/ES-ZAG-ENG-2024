#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",&N);
    int arr[N];
    for(int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    N -=1;
    for(int i=N; i >= 0; i--){
    printf("%d ",arr[i]);
    }


    return 0;
}
