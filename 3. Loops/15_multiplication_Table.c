/* 45. Create a program using for loop multiplication table for a number*/

#include<stdio.h>
int main() {
    int num;

    printf("Please enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <=  10; i++) {
        printf("\n%d X %d = %d", num, i, num * i);
    }
    return 0;
}