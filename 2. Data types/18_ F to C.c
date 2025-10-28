/* 18.Create a program to convert Fahrenheit to Celsius
 °C = (°F - 32) × 5/9 */

 #include<stdio.h>
 int main() {
    float f;
    printf("Enter the temperature in f: ");
    scanf("%f", &f);

   float c = (f - 32) * 5 / 9;
    printf("\n Temperature in Celsius is %.2f", c);
    return 0;
 }