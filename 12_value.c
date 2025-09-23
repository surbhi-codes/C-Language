/*WAP to find the value of y in the following equation- y = x^2 + 3x + 1*/

#include <stdio.h>
int main()
{
    float x,y;
    printf("Enter the vlaue of x: ");
    scanf("%f", &x);

    y = x*x + 3*x + 1;
    printf("The value of y is : %2.f\n", y);
    return 0;

}