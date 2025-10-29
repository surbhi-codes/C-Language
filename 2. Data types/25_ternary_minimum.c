/* 25. Create a program to find the minimum of two numbers using 
ternary operator.*/

#include <stdio.h>
int main() {
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    int min = first < second ? first : second;
    printf("Minium of the two number is %d", min);
    return 0;
}