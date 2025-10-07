/*Create a program to input name of the person and respond with 
'Welcome NAME to KG Coding'*/

#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf(" %19s", name);
    printf("Welcome %s to KG Coding.", name);
    return 0;
}