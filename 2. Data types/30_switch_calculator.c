/* 30. Create a program to create a simple calculator that uses a 
switch statement to perform basic arithmetic operations 
like addition, subtraction, multiplication, and division.
*/

#include <stdio.h>
int main() {
    float first, second;
    char opr;
    printf("Welcome to calculator\n");
    printf("Enter the first number: ");
    scanf("%f", &first);
    printf("Enter the second number: ");
    scanf("%f", &second);
    printf("Enter the operation(+, -, *, /): ");
    scanf(" %c", &opr);

    float res;
    switch (opr) 
    {
        case '+': res = first + second;
        break;
        case '-': res = first - second;
        break;
        case '*': res = first * second;
        break;
        case '/': res = first / second;
        break;
        default:
        invalid = 1;
        break;
    }
    if (invalid == 0) {
        printf("The result is: %.2f", res);
    } else {
       printf("Invalid operator, please enter (+, -, * ,/)");
    }
    return 0;
}