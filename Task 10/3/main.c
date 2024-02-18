#include <stdio.h>

int main() {
  unsigned int x = 10, z = 30, y = 20;
  unsigned int *p = &x;
  unsigned int *q = &y;
  unsigned int *r = &z;
  printf("Value of X = %i\n", x);
  printf("Value of Y = %i\n", y);
  printf("Value of Z = %i\n", z);

  printf("Address of X (p) = 0X%x\n", p);
  printf("Address of Y (q) = 0X%x\n", q);
  printf("Address of Z (r) = 0X%x\n", r);

  printf("Value of *p = %i\n", *p);
  printf("Value of *q = %i\n", *q);
  printf("Value of *r = %i\n", *r);
  printf("=================");
  printf("Swapping pointers");
  printf("=================\n");
  r = p;
  p = q;
  q = r;
  printf("Value of X = %i\n", x);
  printf("Value of Y = %i\n", y);
  printf("Value of Z = %i\n", z);

  printf("Address of X (p) = 0X%x\n", p);
  printf("Address of Y (q) = 0X%x\n", q);
  printf("Address of Z (r) = 0X%x\n", r);

  printf("Value of *p = %i\n", *p);
  printf("Value of *q = %i\n", *q);
  printf("Value of *r = %i\n", *r);
}