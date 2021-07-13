/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2, sum;
  float avg;

printf("input mark 1 :");
scanf("%d",& m1);

printf("input mark 2 :");
scanf("%d",& m2);
  
sum = m1 +m2 ;
printf("sum is  :%d\n", sum);

avg = sum/2;
printf("avg is :%.2f ", avg);

  return 0;
}

