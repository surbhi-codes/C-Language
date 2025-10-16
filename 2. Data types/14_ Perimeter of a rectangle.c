/*Create a program to calculate Perimeter of a rectangle. 
Perimeter of rectangle ABCD = A+B+C+D*/

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the first side:");
    scanf("%d", &a);
    printf("Enter the second side:");
    scanf("%d", &b);
    printf("Enter the third side:");
    scanf("%d", &c);
    printf("Enter the fourth side:");
    scanf("%d", &d);

    int Perimeter = a + b + c + d;
    printf("\n The perimeter of your shape is: %d", Perimeter);
    return 0;
}