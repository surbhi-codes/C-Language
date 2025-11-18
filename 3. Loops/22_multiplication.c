/* WAP to enter a number and find the multiplication of digits using while loop */

#include <stdio.h>

int main() {
    int n, digit, product = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n == 0) {
        product = 0;   // because 0's only digit is 0
    } else {
        while (n > 0) {
            digit = n % 10;         // extract last digit
            product = product * digit;
            n = n / 10;             // remove last digit
        }
    }

    printf("Multiplication of digits = %d", product);

    return 0;
}
