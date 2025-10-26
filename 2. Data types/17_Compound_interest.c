/* 7.Create a program to calculate Compound interest.
 Compound Interest = P(1 + R/100)t */

#include <stdio.h>
#include <math.h>

int main() {
  float principal, rate, time;
  printf("Enter the principal: ");
  scanf("%f", &principal);
  printf("Enter the rate: ");
  scanf("%f", &rate);
  printf("Enter the time : ");
  scanf("%f", &time);

  float interest = principal * pow((1 + rate /100), time);
  printf("\n Compound Interest is: %.2f",interest);
  return 0;
}