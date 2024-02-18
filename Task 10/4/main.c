#include <stdio.h>
int GetFactorial(int Number);
int main(){
    int Num;
    int Factorial;
    printf("Enter Number To get Facorial :");
    scanf("%d",&Num);
    Factorial =GetFactorial(Num);
    printf("Facorial = %d",Factorial);
}
int GetFactorial(int Number){
    int Result =0;
    if(Number ==0){
        Result =1;
    }
    else{
        Result = Number *GetFactorial(Number-1);
    }
    return Result;
}