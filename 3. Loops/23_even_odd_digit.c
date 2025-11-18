/* WAP to input a number and find the sum of even and odd digits separately */

#include <stdio.h>

int main() {
    int n, digit;
    int evenSum = 0, oddSum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;     // extract last digit

        if (digit % 2 == 0) {
            evenSum = evenSum + digit;
        } else {
            oddSum = oddSum + digit;
        }

        n = n / 10;         // remove last digit
    }

    printf("Sum of even digits = %d\n", evenSum);
    printf("Sum of odd digits  = %d", oddSum);

    return 0;
}
