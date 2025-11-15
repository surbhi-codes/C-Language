/*WAP to find the sum of 1st n integers*/
#include<stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("Sum = %d", sum);
    return 0;
}