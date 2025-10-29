/* 23.Create a program that calculates grades based on marks 
A -> above 90%                        
B -> above 75%
 C -> above 60%                        
D -> above 30%
 F -> below 30% */ 

 #include <stdio.h>
 int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("You got A grade.");
    } else if (marks > 75) {
        printf("You got B grade.");
    } else if (marks > 60) {
        printf("You got C grade.");
    } else if (marks > 30) {
        printf("You got D grade.");
    } else {
        printf("You have failed exam with F grade.");
    } 
     }