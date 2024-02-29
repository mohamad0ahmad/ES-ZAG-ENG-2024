#include <stdio.h>
int main(){
    enum Months{
        jan=1,feb,mar,abr,may,jun,jul,aug,sep,oct,nov,dec
    };
    enum Months month1 = jan;
    enum Months month4 = abr;
    enum Months month6 = jun;
    enum Months month10 = oct;
    printf("Jan= %d\n",month1);
    printf("Apr= %d\n",month4);
    printf("Jun= %d\n",month6);
    printf("Oct= %d\n",month10);

    return 0;
}