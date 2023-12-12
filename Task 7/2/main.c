#include <stdio.h>
#include <stdlib.h>

/* Write C code that manages a small school. The school has 3
classes each class contains 10 students. Define three arrays for
the three classes, each one with a length of 10. Save a random
number in all array elements to indicate the student’s grade.
The program will calculate and display the following statistics:

1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade Knowing that the total grade is from 100
and the minimum passing grade is 50.*/


int main()
{
    int Class1[10]={44,55,66,77,88,78,98,55,34,90};
    int Class2[10]={12,23,34,45,76,87,45,78,35,89};
    int Class3[10]={34,45,56,67,78,66,26,58,91,95};
    int c; //counter
    int P_Std_C1=0; //Num of passed student in Class1
    int F_Std_C1=0; //Num of Failed student in Class1
    int P_Std_C2=0;
    int F_Std_C2=0;
    int P_Std_C3=0;
    int F_Std_C3=0;
    int Min_C1,Max_C1; //minimum & maximum degree in class 1
    int Min_C2,Max_C2;
    int Min_C3,Max_C3;
    int Avg_C1=0; //Avg degree in class 1
    int Avg_C2=0;
    int Avg_C3=0;

    for( c=0; c<10; c++)
    {
        if (Class1[c]>=50)
        {
            P_Std_C1++;
        }
        else F_Std_C1++;
    }

    for( c=0; c<10; c++)
    {
        if (Class2[c]>=50)
        {
            P_Std_C2++;
        }
        else F_Std_C2++;
    }

    for( c=0; c<10; c++)
    {
        if (Class3[c]>=50)
        {
            P_Std_C3++;
        }
        else F_Std_C3++;
    }

    printf("Number of passed student in Class1: %d  \n",P_Std_C1);
    printf("Number of failed student in Class1: %d  \n",F_Std_C1);

    printf("Number of passed student in Class2: %d \n",P_Std_C2);
    printf("Number of failed student in Class2: %d  \n",F_Std_C2);

    printf("Number of passed student in Class3: %d  \n",P_Std_C3);
    printf("Number of failed student in Class3: %d  \n",F_Std_C3);



    Max_C1=Min_C1=Class1[0];
    for( c=1; c<10; c++)
    {
        if(Class1[c]>Max_C1)
        {
            Max_C1 =Class1[c];
        }
        else if(Class1[c]<Min_C1)
        {
            Min_C1 =Class1[c];
        }
    }

    Max_C2=Min_C2=Class2[0];
    for( c=1; c<10; c++)
    {
        if(Class2[c]>Max_C2)
        {
            Max_C2 =Class2[c];
        }
        else if(Class2[c]<Min_C2)
        {
            Min_C2 =Class2[c];
        }
    }

    Max_C3=Min_C3=Class3[0];
    for( c=1; c<10; c++)
    {
        if(Class3[c]>Max_C3)
        {
            Max_C3 =Class3[c];
        }
        else if(Class3[c]<Min_C3)
        {
            Min_C3 =Class3[c];
        }
    }

    printf("maximum & minimum degree in class 1 is: %d & %d \n",Max_C1,Min_C1);
    printf("maximum & minimum degree in class 2 is: %d & %d \n",Max_C2,Min_C2);
    printf("maximum & minimum degree in class 3 is: %d & %d \n",Max_C3,Min_C3);

    for(c=0;c<10;c++){
        Avg_C1 +=(Class1[c]/10);
    }
    for(c=0;c<10;c++){
        Avg_C2 +=(Class2[c]/10);
    }
    for(c=0;c<10;c++){
        Avg_C3 +=(Class3[c]/10);
    }


    printf("Avg Degree in Class1 is: %d \n",Avg_C1);
    printf("Avg Degree in Class2 is: %d \n",Avg_C2);
    printf("Avg Degree in Class3 is: %d \n",Avg_C3);




    return 0;
}
