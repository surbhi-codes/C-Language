/* WAP to calculate distance from given speed and time */

#include <stdio.h>
int main()
{
    float speed, time, distance;
    printf("Enter the speed and time: ");
    scanf("%f %f", &speed, &time);
    distance= speed * time;
    printf("The distance is: %.2f", distance);
    return 0;
}