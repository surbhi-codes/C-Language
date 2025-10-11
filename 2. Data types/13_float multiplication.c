/* Create a program to calculate product of two floating points numbers. */

#include <stdio.h>
int main()
{
    float first, second;
    printf("Enter the first number: ");
    scanf("%f", &first);

    printf("Enter the second number: ");
    scanf("%f", &second);
  
    float result = first * second;
    printf("\n Product is: %f", result);
    return 0;

}