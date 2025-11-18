/*WAP to enter a number and find the sum of the digits of the number*/

#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;     // extract last digit
        sum = sum + digit;  // add to sum
        n = n / 10;         // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
