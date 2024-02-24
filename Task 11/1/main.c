#include <math.h>
#include <stdio.h>

struct {
  short Hour;
  short Minutes;
  short Seconds;
} StartTime, EndTime;

int main() {
  printf("Enter start time\nEnter hours, minutes and seconds respectevly :\n");
  scanf("%hd", &StartTime.Hour);
  scanf("%hd", &StartTime.Minutes);
  scanf("%hd", &StartTime.Seconds);
  printf("Enter stop time\nEnter hours, minutes and seconds respectevly :\n");
  scanf("%hd", &EndTime.Hour);
  scanf("%hd", &EndTime.Minutes);
  scanf("%hd", &EndTime.Seconds);
  printf("TIME DIFFRENCE : %hd:%hd:%hd ", StartTime.Hour, StartTime.Minutes,
         StartTime.Seconds);
  printf("- %hd:%hd:%hd ", EndTime.Hour, EndTime.Minutes, EndTime.Seconds);
  printf("= %hd:%hd:%hd", abs(StartTime.Hour - EndTime.Hour),
         abs(StartTime.Minutes - EndTime.Minutes),
         abs(StartTime.Seconds - EndTime.Seconds));
}