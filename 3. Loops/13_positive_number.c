/* 43. Create a program that prompts the user to enter a positive number. 
Use a do-while loop to keep asking for the number until the user 
enters a valid positive number.*/

#include<stdio.h>
int main() {
    int num;
    printf("Welcome to the Ziddi number checker\n");

    do {
        printf("Please enter the positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You have successfully entered a positive number");

    return 0;
}