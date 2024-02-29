#include <stdio.h>
int main() {
  typedef struct {
    char name;
    float score;
  } Student;
  Student *students = (Student *)malloc(sizeof(Student) * 50);
  for (int i = 0; i < 50; i++) {
    (students + i)->name = (char *)malloc(sizeof(char) * 25);
  }
  float totalScore = 0.0, averageScore = 0.0;
  int highestScore = 0, numofstudents = 0;
  char Char;

  for (int i = 0; i < 50; i++) {
    printf("Student Name: ");
    scanf("%s", (students + i)->name);

    printf("Student Score: ");
    scanf("%f", (students + i)->score);

    totalScore += ((students + i)->score);
    numofstudents++;
    printf("More Students ? q to quit other to continue : ");
    scanf(" %c", &Char);
    if (Char == 'Q' || Char == 'q') {
      break;
    }
  }

  averageScore = totalScore / numofstudents;
  printf("The Number Of Students is %f\n", numofstudents);
  printf("The Average is %f\n", averageScore);
  printf("====================REPORT====================\n");
  for (int i = 0; i < numofstudents; i++) {
    printf("Student Name:%s         Score:%f \n", (students + i)->name,
           (students + i)->score);
  }

  printf("====================students above average====================");
  for (int i = 0; i < numofstudents; i++) {
    if ((students + i)->score > averageScore) {
      printf("Student Name:%s         Score:%f \n", (students + i)->name,
             (students + i)->score);
    }
  }
  printf("====================students below average====================");
  for (int i = 0; i < numofstudents; i++) {
    if ((students + i)->score < averageScore) {
      printf("Student Name:%s         Score:%f \n", (students + i)->name,
             (students + i)->score);
    }
  }
  return 0;
}