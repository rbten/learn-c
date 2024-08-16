#include <stdio.h>

int main() {
  // Fix the missing data types
  int studentRank;
  float studentFeeTotal;
  char studentGradeLetter;

  // Input
  studentRank = 1;
  studentFeeTotal = 100.56;
  studentGradeLetter = 'A';
  
  printf("Student's rank: %dst\n", studentRank);
  printf("Student's Total Fees: $%3.2f\n", studentFeeTotal);
  printf("Student's rank: %c\n", studentGradeLetter);

  int numOfLoops = 10;

  // Please do not modify anything below this point
  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n", y);

// If you were curious about what this code is doing, it is looping through and adding to our variables b and y a set amount of 0.1 on each loop
  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
    y += x;
  }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);
}