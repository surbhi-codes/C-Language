/*.Create a program to calculate the Area of a Triangle. 
Area of triangle = ½*B*H */

#include <stdio.h>
int main()
{
    int B, H;
    printf("Welcome to Area of triangle calculation.\n");
    printf("Enter the breadth of triangle: ");
    scanf("%d", &B);
    printf("Enter the height of triangle: ");
    scanf("%d", &H);
    
    float Area = 0.5 * B * H;
    printf("\n Area of triangle is: %.2f", Area);
    return 0;
    }