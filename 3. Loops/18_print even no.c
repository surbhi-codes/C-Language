/*48. Create a program using continue to print only even numbers using 
continue for odd numbers.*/

#include<stdio.h>
int main() {
    int max;
    printf("Please enter the max number: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++) {
        if (i % 2 ==1) continue;
        printf(" %d", i);
    }
    return 0;
}