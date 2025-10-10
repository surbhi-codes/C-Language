/*Create a program that takes two numbers and shows result of all 
arithmetic operators (+,-,*,/,%).*/

#include <stdio.h>
int main()
{  
   int num1, num2;
    int sum, sub, multiply, div, modulo;  // declare all result variables

    // Input two numbers
   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);
   
   // Perform operations
   sum = num1 + num2;
   printf("The sum of two numers is %d.\n", sum);

   sub = num1 - num2;
   printf("The subtraction of two numers is %d.\n", sub);

   multiply = num1 * num2;
  printf("The multiplication of two numers is %d.\n",multiply);

   div = num1 / num2;
   printf("The divison of two numers is %d.\n",div);

   modulo = num1 % num2;
     printf("The modulo of two numers is %d.\n",modulo);

return 0;
}
 
