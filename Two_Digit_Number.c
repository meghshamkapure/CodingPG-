//Write a program to check whether number is 2 digit or not.

#include<stdio.h>

int number;

int main ()
{
  printf ("Enter any number");
  scanf ("%d", &number);

  if (number > 9 && number < 100)
    {
      printf ("Entered number is 2 digit number\n");
    }
  else
    {
      printf ("Entered number is not a 2 digit number\n");
    }

}
