/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{

  int number, sum = 0, i = 1;

  printf("Enter number : ");    
	scanf("%d", &number);

  while (i <= number)
  {
    sum = sum + 1;
    i++;
  }

  printf("Sum of the numbers from 1 to %d is %d", number, sum);

  return 0;
}
