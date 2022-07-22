//c. Write a program to check of a student is passed or failed

#include<stdio.h>

int marks;

int main()

{

    printf("Enter marks");
    scanf("%d",&marks);

    if (marks>=0 && marks<=030)
    {
        printf("You have passed the exam with C Grade");
    }

    else if (marks>=30 && marks<=70)
    {
         printf("You have passed the exam with B Grade");
    }
    
    else if (marks>=70 && marks<=90)
    {
         printf("You have passed the exam with A Grade");
    }

    else if (marks>=90 && marks<=100)
    {
         printf("You have passed the exam with A+ Grade");
    }

    else
    {
        printf("You Have Entered Wrong Marks");
    }

}