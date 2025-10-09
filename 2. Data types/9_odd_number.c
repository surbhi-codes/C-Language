/*WAP to accept a number and print of it's odd number*/

#include <stdio.h>
int main()
{
    int num;
    //input number
    printf("Enter a number: ");
    scanf("%d", &num);

// check odd number
    if (num % 2 != 0) { 
    printf("%d is odd number.\n", num);
    }
    return 0;
}