/*WAP to accept 3 numbers and print the largest using conditional operator / ternary operator*/

#include <stdio.h>
int main()
{
    int a, b, c, large;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using nested ternary operator
    large = (a > b) ? ((a > c) ? a : c)
                      : ((b > c) ? b : c);

   printf("The largest number is: %d\n", large);
}
