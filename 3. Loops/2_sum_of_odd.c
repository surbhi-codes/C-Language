/*2. Create a program to sum all odd numbers from 1 to a specified number N*/

#include<stdio.h>
int main() {
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);
    
    int i = 1;
    int sum = 0;
    while (i <= num) {
        sum += i;
        i += 2;
    }

    printf("The sum of all odd numbers from 1 to %d is %d", num, sum);
    return 0;
}