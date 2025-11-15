/*WAP to print the sum of all odd integers b/w (1 to 100)*/

#include<stdio.h>
int main() {
    int i = 1, sum = 0;

    do {
        if (i % 2 != 0) {  // check odd
            sum = sum + i;
        }
        i++;
    } while(i <= 100);

    printf("Sum of all odd numbers between 1 and 100 = %d", sum);

    return 0;
}
