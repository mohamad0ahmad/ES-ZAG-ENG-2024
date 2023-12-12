#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0;
    int i;
    int N;
    printf("Enter Num of characters in string: ");
    scanf("%d",&N);
    char arr[N];
    printf("Enter string: ");
    fflush(stdin);
    fgets(arr,N,stdin);


   for (i=0;i<N;i++){
        if(arr[i]=='0')
        {
            ++k;
        }

    }

    printf("%d",k);

    k=0;

    for (i=0;i<N;i++){
        if(arr[i]=='1')
        {
            k++;
        }
    }
    printf("%d",k);


    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='2')
         {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='3')
        {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='4')
          {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='5')
          {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='6')
          {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='7')
          {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='8')
         {
            k++;
        }
    }
    printf("%d",k);
    k=0;
    for (i=0;i<N;i++){
        if(arr[i]=='9')
         {
            k++;
        }
    }
    printf("%d",k);

    return 0;
}
