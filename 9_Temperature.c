/*WAP to accept temperature in fahrenheit and convert it into celsius*/

#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &f);

    c = (f-32) * 5/9;
    printf("Temperature in celsius= %.2f\n", c);
    return 0;
}
