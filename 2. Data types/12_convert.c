/* Given an integer value, convert it to a floating-point value and print 
both.*/

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    float floating = number;
    printf("\n Original number is: %d", number);
    printf("\n float converted is: %f", floating);
    printf("\n float converted is: %f", (float)number);

    return 0;
}