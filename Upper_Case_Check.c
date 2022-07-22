#include<stdio.h>
int ch;

int main()

{
printf("Enter a english character \n");
scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z' )
        {
            printf("You have entterd an lower case letter\n");
        }

    else if (ch >= 'A' && ch <= 'Z' )
        {
            printf("You have entterd an uppper case letter\n");
        }

    else
        {
            printf("Its not a english character");
        }

}