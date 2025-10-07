/*Create a program to declare two integer variables, assign them 
values, and display their values*/

#include <stdio.h>
int main() 
{
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);
     printf("Enter the second number: ");
    scanf("%d", &second);
    
    printf("The two numbers you entered are %d and %d", first, second);
    return 0;
}