#include "Bit_Operations.h"
#include <stdio.h>

int main() {
  int Var = 4;
  printf("value =%i\n", Var);
  Set_Bit(Var, 1);
  printf("value =%i\n", Var);
  Toggle_Bit(Var, 1);
  printf("value =%i\n", Var);
  Clr_Bit(Var, 2);
  printf("value =%i\n", Var);
}