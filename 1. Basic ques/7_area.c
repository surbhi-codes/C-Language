/*WAP to accept the radius of the circle and print the area & perimeter*/

#include <stdio.h>
int main() 
{
    float radius, area, peri;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    peri = 2 * 3.14 * radius;

    printf("Area= %.2f, Perimeter= %.2f\n", area, peri);
    return 0;
}