/* Create a program to calculate simple interest.
 Simple Interest = (P x T x R)/100 */

 #include <stdio.h>
 int main()
 {
   float principal, rate, time;
    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time : ");
    scanf("%f", time);
     
    float Interest = (principal * rate * time) / 100;
    printf("\n Simple Interest is:%.2f ", Interest);
    return 0; 
 }