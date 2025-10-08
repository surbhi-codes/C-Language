/*Create a program to swap two numbers.*/

#include <stdio.h>
int main()
{
    int first, second, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);
    // Swapping
    temp = first;
    first = second;
    second = temp;

    printf("The value of first is %d and second is %d.", first, second);
    return 0;
}