#include <stdio.h>

void NumOperations(int num1, int num2, int *sumPtr, int *subPtr);
int main() {
  int var1;
  int var2;
  int sum = 0;
  int sub = 0;

  printf("Enter First Num : \n");
  scanf("%i", &var1);
  printf("Enter Second Num : \n");
  scanf("%i", &var2);
  NumOperations(var1, var2, &sum, &sub);
  printf("Summition = %i \n", sum);
  printf("Subtraction = %i \n", sub);
}

void NumOperations(int num1, int num2, int *sumPtr, int *subPtr) {
  *sumPtr = num1 + num2;
  *subPtr = num1 - num2;
}
