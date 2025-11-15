/* 41. Create a program to verify if a number is a palindrome.
*/

#include<stdio.h>
int main() {
    int num, i, rev = 0;
    printf("Please enter the number: ");
    scanf("%d", &num);

    int temp = num;
     
    while (temp > 0) {
        i = temp % 10;
        temp /= 10;
        rev = rev * 10 + i;
    }
    
    if (rev == num) {
       printf("The number %d is  Palindrome.", num);
    } else {
       printf("The number %d is not  Palindrome.", num);
    }
     
    return 0;
}