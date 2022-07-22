// Write a program to perform an division showing remainder if division is not done fully.

#include<stdio.h>

int dividend, divisor, quotient, remainder_  ;

int  main()

{
    
    printf("Enter Divident \n");
    scanf("%d",&dividend);
    
    printf("Enter Divisor \n");
    scanf("%d",&divisor);
    
    remainder_=dividend%divisor;
    
    if (remainder_==0)
    {
        printf("Divident is Divided by Divisor");
    }
    else
    {
        printf("Divident is not Divided by Divisor and Remainder is %d",remainder_);
    }
}

