/*WAP to accept a number and print of it's even or odd number */

#include <stdio.h>
int main() {
    int num;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);
   
   // check even or odd
    if (num % 2 == 0) { 
    printf("%d is a even number.\n", num);
    }
    else {
    printf("%d is a odd number.\n", num);
    }
    return 0;
}