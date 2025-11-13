/*37. Create a program to check whether a given number is prime using while*/

#include<stdio.h>
int main() {
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    int i = 2;
    while(i < num) {
        if(num % i == 0) {
            printf("%d is not a prime number", num);
            return 0;
        }
        i++;
    }

    printf("%d is a prime number", num);
    return 0;
}