/*26. Create a program to find if the given number is even or odd 
using ternary operator.*/

#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("The number is even.")
                 : printf("The number is odd.");
    return 0;
    }
