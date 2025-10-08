/*Create a program to print the area of a circle by inputting its radius*/

#include <stdio.h>
int main()
{
    int radius;
    const float PI = 3.14159;
    printf("Enter the radius of circle in cms: ");
    scanf("%d", &radius);

    printf("The area of circle is %f cm2.", PI * radius * radius);
    return 0;
}