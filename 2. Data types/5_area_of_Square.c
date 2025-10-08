/* Create a program to print the area of a square by inputting its side 
length*/

#include <stdio.h>
int main() {
int side;
printf("Please enter the side of square in cms: ");
scanf("%d", &side);
printf("The area of square is %d cm*cm", side*side);
return 0;
}