/* 46. Create a program using for to display if a number is prime or not.
*/

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