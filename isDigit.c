//c. Write a program to print the smallest number of two.

#include<stdio.h>
#include<ctype.h>

char num;

int main()

{
    printf("Please give a input \n");
    scanf("%c",&num);
    
    if (isdigit(num))
    {
        printf("Input is a digit \n");
    }
    else
    {
        printf("Input is a  not digit \n");
    }
    
}