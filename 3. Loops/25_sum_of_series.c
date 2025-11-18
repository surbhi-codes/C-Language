/* WAP to find the sum of series: 1! + 2! + 3! + ... + n! */

#include <stdio.h>

int main() {
    int n, i, j;
    int fact, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = 1;

        for (j = 1; j <= i; j++) {
            fact = fact * j;   // calculate i! using inner loop
        }

        sum = sum + fact;       // add factorial to total sum
    }

    printf("Sum of series = %d", sum);

    return 0;
}
