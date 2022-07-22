// Write a program to find out the number given is even or odd

#include<stdio.h>

int number;

int  main()

{
    printf("Enter any number");
    scanf("%d",&number);
    
    if(number%2==0)
    {
        printf("The Number is EVEN");
    }
    else
    {
        printf("The Number is ODD");
    }
}