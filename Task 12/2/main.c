#include <stdio.h>
int main() {

  char *Ptr1 = NULL;
  char *Ptr2 = NULL;
  int *Num_Of_wrong_Ans = NULL;
  int No_Of_Q = 0;
  int Correct_Ans = 0;
  int Wrong_Ans = 0;

  Ptr1 = (char *)malloc(10 * sizeof(char));

  printf("Enter The correct Answers : \n");
  for (int i = 0; i < 10; i++) {
    scanf(" %c", &(Ptr1[i]));
  }

  Ptr2 = (char *)malloc(10 * sizeof(char));

  printf("Enter Student Answers : \n");
  for (int i = 0; i < 10; i++) {
    scanf(" %c", &(Ptr2[i]));
  }

  Num_Of_wrong_Ans = (int *)malloc((10 * sizeof(int)));

  for (int i = 0; i < 10; i++) {
    if (Ptr1[i] == Ptr2[i]) {
      Correct_Ans++;
      No_Of_Q++;
    } else {
      No_Of_Q++;
      Num_Of_wrong_Ans[Wrong_Ans] = No_Of_Q;
      Wrong_Ans++;
    }
  }
  printf("Number of correct answers is : %d\n", Correct_Ans);
  printf("Number of wrong answers is : %d\n", Wrong_Ans);
  printf("And Their Numbers are : ");
  for (int i = (Wrong_Ans - 1); i >= 0; i--) {
    printf("%d, ", Num_Of_wrong_Ans[i]);
  }

  return 0;
}
