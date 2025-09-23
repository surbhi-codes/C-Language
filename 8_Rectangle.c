/* WAP to find area and perimeter of a rectangle input length & breadth of a rectanle from user */

#include <stdio.h>
int main()
{
    int l, b;
    int area, perimeter;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * ( l + b);
    printf("Area = %d, Perimeter = %d\n", area, perimeter);
    return 0;
}