/*35. Create a program to find the Least Common Multiple (LCM) of two numbers*/

#include <stdio.h>
int main() {
    int first, second;
    printf("Welcome to LCM Calculator\n");
    printf("Please entern the first number: ");
    scanf("%d", &first);
    printf("Please enter the second number: ");
    scanf("%d", &second);

    int min = first > second ? first : second;
    int max = first * second;

    for (int i = min; i <= max; i++) {
        if ( i % first == 0 &&  i % second == 0) {
            printf("The LCM of %d and %d is %d", first, second, i);
            break;
        }
    }
return 0;
}