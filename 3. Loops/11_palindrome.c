/* 41. Create a program to verify if a number is a palindrome.
*/

#include<stdio.h>
int main() {
    int num;
    printf("Please enter the number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;
     
    while (copy > 0) {
        reverse = (reverse * 10) + (copy % 10);
        copy /= 10;
    }
     if ( reverse == num) {
        printf("The number %d is  Palindrome.", num);
     } else {
        printf("The number %d is not  Palindrome.", num);

     }
    return 0;
}