/*WAP to accept principal amount, rate of interest and number of years and compute simple interest.*/

#include <stdio.h>
int main()
{
  float p, r, t;
  printf("Enter the principal amount, rate of interest and number of years: ");
  scanf("%f %f %f", &p, &r, &t);

  printf("simple interest is: %.2f\n", p * r * t / 100);
  return 0;
} 