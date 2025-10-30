/* 3. Write a function that calculates the factorial of a given number.*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int i = 2;
    int fact = 1;
    while (i <= num) {
        fact = fact * i;
        i++;
    }
    printf("The factorial of %d is %d", num, fact);
    return 0;
}