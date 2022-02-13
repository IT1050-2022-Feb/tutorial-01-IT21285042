/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int subject1, subject2, total;
  float average;

  printf("enter marks of subject 1 : ");
  scanf("%d",&subject1);

  printf("enter marks of subject 2 : ");
  scanf("%d",&subject2);

  total = subject1 + subject2;

  average = total / 2;
  printf("average is %.2f", average);
  
  return 0;
}

