/*WAP in C to find The area of a triangle when three sides are given.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, Area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);


    // Semi-perimeter
    s = (a + b + c)/2;

    // Area using Heron's formula
    Area = sqrt (s * (s-a) * (s-b) * (s-c));

    printf ("Area of triangle is: %2.f\n", Area);
    return 0;
}