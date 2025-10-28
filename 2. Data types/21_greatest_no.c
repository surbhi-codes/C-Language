/* 21. Create a program that determines the greatest of the three 
numbers.*/

#include <stdio.h>
int main() {
    int first, second, third;
    printf("Enter first numbers: ");
    scanf("%d", &first);

    printf("Enter second numbers: ");
    scanf("%d", &second);

    printf("Enter third numbers: ");
    scanf("%d", &third);

    if ( first > second && first > third) {
        printf("%d is greatest", first);
    }

    else if ( second > first && second > third) {
        printf("%d is greatest", second);
    }

    else {
        printf("%d is greatest", third);
    }
    return 0;
}