/*  24.Create a program that categorize a person into different age groups 
Child -> below 13                    
Teen -> below 20
 Adult -> below 60                   
Senior-> above 60
*/

#include<stdio.h>
int main(){
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a child.");
    } else if (age < 20) {
        printf("You are a teen");
    } else if (age < 60) {
        printf("You are an adult");
    } else  {
        printf("You are a senior");
    }
   return 0;
}