/*37. Create a program to check whether a given number is prime*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is not prime number", num);
            return 0;
        }
    }
    printf("%d is prime number", num);
    return 0;
}