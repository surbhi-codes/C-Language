/* 28. Create a program to Based on a student's score, categorize as 
"High", "Moderate", or "Low" using the ternary operator (e.g., 
High for scores > 80, Moderate for 50-80, Low for < 50) */ 

 #include <stdio.h>
 int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    printf("\nYour marks in this category: ");
    marks > 80 ? printf("High")
               : (marks >= 50 ? printf("Moderate")
                              : printf("Low"));
    return 0;
     }