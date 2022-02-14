/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1, mark2;
  float total, avg;

  printf("Enter the mark of the subject 1 :");
  scanf("%d", &mark1);

  printf("Enter the mark of the subject 2 :");
  scanf("%d", &mark2);

  total = mark1 + mark2;
  avg = total/2.0;

  printf("average is : %.2f", avg);
  
  return 0;
}

