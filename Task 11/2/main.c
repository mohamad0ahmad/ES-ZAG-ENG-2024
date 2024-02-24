#include <stdio.h>

struct Values {

  float Price;
  int Quantity;
  char Name[];
} Element;

struct Values Element = {44.4, 12, "XYZ"};

float FunUpdate(struct Values *ptr);

int main() { printf("Value of the item : %f", FunUpdate(&Element)); }

float FunUpdate(struct Values *ptr) {
  printf("Input increment values \nincremet in price and quantity respectivly "
         ": \n");
  float x;
  scanf("%f", &x);
  (ptr->Price) += x;
  scanf("%f", &x);
  (ptr->Quantity) += (int)x;

  printf("---Updated Values of item---\n");
  printf("Name : %s\n", (ptr->Name));
  printf("Price : %f\n", (ptr->Price));
  printf("Quantity : %d\n", (ptr->Quantity));

  return ((ptr->Quantity) * (ptr->Price));
}