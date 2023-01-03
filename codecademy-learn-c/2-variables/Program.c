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
}