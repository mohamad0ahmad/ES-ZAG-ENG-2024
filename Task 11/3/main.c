#include <stdio.h>

struct employees {
  int Salary;
  int Bounce;
  int Deduction;
} Ahmad, Waleed, Amr;

int main() {
  printf("Please Enter Ahmed Salary: \n");
  scanf("%d", &Ahmad.Salary);
  printf("Please Enter Ahmed Bounce: \n");
  scanf("%d", &Ahmad.Bounce);
  printf("Please Enter Ahmed Deduction: \n");
  scanf("%d", &Ahmad.Deduction);
  /*********************/
  printf("Please Enter Waleed Salary: \n");
  scanf("%d", &Waleed.Salary);
  printf("Please Enter Waleed Bounce: \n");
  scanf("%d", &Waleed.Bounce);
  printf("Please Enter Waleed Deduction: \n");
  scanf("%d", &Waleed.Deduction);
  /*********************/
  printf("Please Enter Waleed Salary: \n");
  scanf("%d", &Amr.Salary);
  printf("Please Enter Waleed Bounce: \n");
  scanf("%d", &Amr.Bounce);
  printf("Please Enter Waleed Deduction: \n");
  scanf("%d", &Amr.Deduction);

  printf("Total Value Needed = %d",
         (Ahmad.Salary + Ahmad.Bounce - Ahmad.Deduction + Waleed.Salary +
          Waleed.Bounce - Waleed.Deduction + Amr.Salary + Amr.Bounce -
          Amr.Deduction));
}