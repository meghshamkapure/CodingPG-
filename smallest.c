//Write a program to checked smallest no in 2

#include<stdio.h>

int n,m;

int main()

{
printf("Enter 2 number");
scanf("%d%d",&n,&m);

    if (n<m)
    {
        printf("%d is smaller than %d",n,m);
    }
    else if (m>n)
    {
        printf("%d is smaller than %d",m,n);
    }
    else
    {
        printf("%d is eqaual to %d",m,n);
    }

}