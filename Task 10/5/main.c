#include <stdio.h>
float AvgOfArray(int Arr[],int Num,float res);
int main(){
    int N =5;
    int Array[] = {4,5,6,7,8};
    float result = 0;
    result =AvgOfArray(Array,N,result);
    printf("%.6f",(result/N));
}

float AvgOfArray(int Arr[],int Num,float res){
    for ((Num-1);Num>=0;Num--){
        res +=Arr[Num];
    }
    return res;
}