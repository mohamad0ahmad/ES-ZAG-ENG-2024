#include <stdio.h>
#include <stdlib.h>


void SetBit(int Num,int BitNum);
void ClearBit(int Num,int BitNum);
void ToggleBit(int Num,int BitNum);
void ReadBit(int Num,int BitNum);

int Num=0;
int BitNum=0;

int main()
{
    int Num=0;
    int BitNum=0;
    int op;
    while(1){
    printf("Enter a Number: ");
    scanf("%d",&Num);
    printf("Enter a bit number: ");
    scanf("%d",&BitNum);
    printf("\n\n1-Set bit function");
    printf("\n2-Clear bit function");
    printf("\n3-Toggle bit function");
    printf("\n4-Read bit function \n\n\n");

    printf("Enter Num of operation U need to do: ");
    scanf("%d",&op);

    switch (op)
    {
    case 1 :SetBit(Num,BitNum);
            break;

    case 2 :ClearBit(Num,BitNum);
            break;

    case 3 :ToggleBit(Num,BitNum);
            break;

    case 4 :ReadBit(Num,BitNum);
            break;

    default: printf("incorrect Number of operation!!!\n\n");
    }

    }

    return 0;
}

void SetBit(int Num,int BitNum)
{
    int SetNum;
    SetNum = 1<<(BitNum-1);
    Num |=SetNum;
    printf("Number after set bit = %d\n\n",Num);
}
void ClearBit(int Num,int BitNum)
{
    int ClearNum;
    ClearNum= ~(1<<(BitNum-1)) ;
    Num &=ClearNum;
    printf("Number after clear bit = %d\n\n",Num);
}
void ToggleBit(int Num,int BitNum)
{
    int ToggleNum;
    ToggleNum=1<<(BitNum-1);
    Num ^=ToggleNum;
    printf("Number after toggle bit =%d\n\n",Num);
}
void ReadBit(int Num,int BitNum)
{
    int ReadNum;
    ReadNum=1<<(BitNum-1);
    Num &=ReadNum;
    if(Num==0)
        printf("Bit is 0\n\n");
    else
        printf("Bit is 1\n\n");

}

