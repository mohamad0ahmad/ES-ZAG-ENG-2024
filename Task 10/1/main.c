#include <stdio.h>

int main() {
  int A = 10;
  printf("A = %i\n", A);
  int *ptr = &A;
  *ptr = 20;
  printf("A = %i\n", A);
}