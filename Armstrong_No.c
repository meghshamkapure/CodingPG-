
#include<stdio.h>

int main()

{
    int number,n_copy,r,sum=0;
    
    printf("\n \n enter a 3 digit number");
    scanf("%d",&number);
    
    number = n_copy;

    while (number>0)
    {
    
        r=number%3;
        sum=sum+(r*r*r);
        number=number/10;

    }

    if (n_copy==sum)
        {
        printf("The %d is an armstrong number",n_copy);
        }

    else
        {
            printf("The %d is not an armstrong number",n_copy);
        }


}