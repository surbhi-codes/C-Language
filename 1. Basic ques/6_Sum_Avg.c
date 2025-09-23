/*WAP to accept three numbers and compute their sum and average*/
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = (float)sum / 3;

    printf("sum=%d, avg=%.2f\n", sum, avg);
    return 0;
}